#include <stdio.h>

int main(void) {
    int d=1; //������ȯ�� ����
    int x=0, y=-1; //x:����, y:����
    int max, jmax; //�ݺ��� ���� ���ǹ�
    int cnt=1; //�迭�� ä������ ����

    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%d", &max);
    int arr[max][max];
    jmax=max;

    while (jmax >= 0) {
        for (int i = 0; i < jmax; i++) {
            y=y+d;
            arr[x][y]=cnt;
            cnt++;
        }
        jmax--;
        for (int i = 0; i < jmax; i++) {
            x=x+d;
            arr[x][y]=cnt;
            cnt++;
        }
        d=d*-1;
    }
    for (x=0 ; x < max; x++) {
        for (y = 0; y < max; y++) {
            printf("%3d", arr[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
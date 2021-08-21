#include <stdio.h>

int main(void) {
    int d=1; //방향전환용 변수
    int x=0, y=-1; //x:가로, y:세로
    int max, jmax; //반복문 실행 조건문
    int cnt=1; //배열에 채워넣을 숫자

    printf("숫자를 입력하시오:");
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
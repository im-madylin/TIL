#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i = 0, j = 0;
    int win = 0, draw = 0;
    char arr[3][8] = {"����", "����", "��"};

    printf("������ 1, ������ 2, ���� 3 \n");

    while (i >= j) {
        printf("���� ���� �� ����:");
        scanf("%d", &i);
        srand((int) time(NULL));
        j = rand() % 3 + 1;
        printf("%d \n", j);

        printf("����� %s ����, ", arr[i-1]);
        printf("��ǻ�ʹ� %s ����, ", arr[j-1]);

        if (i > j) {
            printf("����� �̰���ϴ�! \n");
            win += 1;
        } else if (i == j) {
            printf("�����ϴ�! \n");
            draw += 1;
        } else
            printf("����� �����ϴ�! \n");
    }
    printf("%d�� %d�� \n", win, draw);
    return 0;
}


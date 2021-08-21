#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i = 0, j = 0;
    int win = 0, draw = 0;
    char arr[3][8] = {"가위", "바위", "보"};

    printf("바위는 1, 가위는 2, 보는 3 \n");

    while (i >= j) {
        printf("가위 바위 보 선택:");
        scanf("%d", &i);
        srand((int) time(NULL));
        j = rand() % 3 + 1;
        printf("%d \n", j);

        printf("당신은 %s 선택, ", arr[i-1]);
        printf("컴퓨터는 %s 선택, ", arr[j-1]);

        if (i > j) {
            printf("당신이 이겼습니다! \n");
            win += 1;
        } else if (i == j) {
            printf("비겼습니다! \n");
            draw += 1;
        } else
            printf("당신이 졌습니다! \n");
    }
    printf("%d승 %d무 \n", win, draw);
    return 0;
}


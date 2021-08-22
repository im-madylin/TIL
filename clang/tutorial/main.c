#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int ComArr[3], YouArr[3];
    int strike = 0, ball = 0;

    printf("Start Game! \n");
    srand((int) time(NULL));

    for (int i = 0; i < 3; i++) {
        ComArr[i] = rand() % 9 + 1;
        for (int j = 0; j < i; j++) {
            if (ComArr[i] == ComArr[j])
                i--;
        }
    }

    for (int k = 1; k >= 0; k++) {
        strike = 0, ball = 0;
        printf("3개의 숫자 선택:");
        scanf("%d %d %d", &YouArr[0], &YouArr[1], &YouArr[2]);

        if (YouArr[0] == YouArr[1] || YouArr[1] == YouArr[2] || YouArr[2] == YouArr[0]) {
            printf("중복된 숫자가 입력되었습니다. \n");
            k--;
            continue;
        }
        if (YouArr[0] == 0 || YouArr[1] == 0 || YouArr[2] == 0) {
            printf("0 입력은 불가능합니다. \n");
            k--;
            continue;
        }

        for (int l = 0; l < 3; l++) {
            if (ComArr[l] == YouArr[l])
                strike += 1;
            else
                for (int m = 0; m < 3; m++) {
                    if (l == m)
                        continue;
                    else if (ComArr[l] == YouArr[m])
                        ball += 1;
                }
        }
        printf("%d번째 도전 결과: %dstrike, %dball!! \n", k, strike, ball);
        if (strike >= 3)
            break;
    }
    printf("Game Over! \n");
    return 0;
}


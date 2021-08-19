#include <stdio.h>

int main(void) {
    int arr[4][4] = {{1,  2,  3,  4},
                     {5,  6,  7,  8},
                     {9,  10, 11, 12},
                     {13, 14, 15, 16}};
    int temp[4][4];

    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < 4; i++) {
            for (int j=0; j<4; j++){
                temp[j][3-i] = arr[i][j];
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++)
                printf("%d ", arr[i][j]);
            printf("\n");
        }
        printf("\n");

        for (int i = 0; i < 4; i++) {
            for (int j=0; j<4; j++)
                arr[i][j] = temp[i][j];
        }
    }
    return 0;
}
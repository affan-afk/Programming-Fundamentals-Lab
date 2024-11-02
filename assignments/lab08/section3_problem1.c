#include <stdio.h>

int main() {
    int three_d_arr[2][3][3] = {
        {{21, 13, 33}, {23, 34, 15},{23, 42, 27}},
        {{51, 62, 83}, {74, 85, 80},{12, 39, 43}}
    };

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                sum1 += three_d_arr[i][j][k];
            }
        }
    }
    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                sum2 += three_d_arr[i][j][k];
            }
        }
    }
    
    printf("sum of all elements on page 1 is: %d",sum1);
    printf("\nsum of all elements on page 2 is: %d",sum2);
    return 0;
}

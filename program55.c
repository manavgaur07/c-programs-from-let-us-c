#include <stdio.h>

int main() {
    int pascal[10][10];   
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;  
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    printf("Pascal's Triangle (10 Rows):\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
            printf("%4d", pascal[i][j]);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() 
{
    int A[10][10], B[10][10], C[10][10];
    int n, i, j, k;
    printf("Enter size of square matrices (n): ");
    scanf("%d", &n);
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    printf("Product Matrix C:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

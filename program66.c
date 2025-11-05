#include <stdio.h>

int main() {
    int A[10][10], B[10][10], sum[10][10], diff[10][10];
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nMatrix A + B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    printf("\nMatrix A - B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}

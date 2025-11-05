#include <stdio.h>

int main() {
    int a[50], n, i, j, temp, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = n - 1; i > 0; i--) {
        pos = 0;
        for(j = 1; j <= i; j++)
            if(a[j] > a[pos])
                pos = j;
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

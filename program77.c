#include <stdio.h>
int main()
{
    int arr[50];
    int n, i, flag=1;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n/2; i++)
    {
        if(arr[i] != n - 1 - i)
        flag=0;
        break;

    }
    return 0;
}
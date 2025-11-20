#include <stdio.h>
int main()
{
    int arr[]= {12,6,6,8,4,4,9,9,4,6};
    int n, i , count;
    printf("Enter The Number:");
    scanf("%d", &n);
    count = 0;
    for(i=0; i<=9; i++)
    {
        if(arr[i]==n)
        count++;
    }
    printf("%d is %d times", n , count);
    return 0;
}
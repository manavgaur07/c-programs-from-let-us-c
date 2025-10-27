#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the number of which table you want:");
    scanf("%d", &n);
    printf("Here is the table of %d", n);
    for(i=1; i<=10;i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}
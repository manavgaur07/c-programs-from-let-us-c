#include <stdio.h>
int main()
{
    int a[5], b[5];
    int i, j;
    for( i=0; i<=4; i++ )
    {
        scanf("%d",&a[i]);
    }
    for( j=4, i=0; i<=4; i++, j--)
    {
         b[j] = a[i];
    }
    for(i = 0;  i<=4; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}
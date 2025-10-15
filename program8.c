#include <stdio.h>
int main()
{
    int n, sum, d1, d2, d3, d4, d5;
    printf("enter five digit number:");
    scanf("%d", &n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;
    sum= d1+d2+d3+d4+d5;
    printf("sum is:%i", sum);
    return 0;
    
}

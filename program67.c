#include <stdio.h>
int main()
{
     int num[] = { 4, 15, 3, 2, 12, 13, 48, 9, 17, 16 };
    int t, i;
    for(i=0; i<=9; i= i + 2)
    {
        t = num[i];
        num[i] = num[i+1];
        num[i+1] = t;
    }
    for(i=0; i<=9; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}
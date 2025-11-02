#include <stdio.h>
int main()
{
    int i;
    float pop=100000;
    float rate=0.10;
    printf("the population today is 100000\n");
    printf("the population increased by the rate 10%.\n");
    printf("the population at the end of every year from last decade is:\n");
    for (i=10; i>=1; i--)
    {
       pop= pop/(1+rate);
       printf("population %d year ago was %.2f\n", i, pop);
    }
    return 0;
}
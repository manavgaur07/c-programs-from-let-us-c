#include <stdio.h>
int main()
{
    float cp, sp, loss, profit;
    printf("enter the cp of the product");
    scanf("%f", &cp);
    printf("enter the sp of the product");
    scanf("%f", &sp);
    profit= sp-cp;
    loss= cp-sp;
    if(sp>cp)
    printf("profit is %f\n", profit);
    else
    printf("loss is %f\n", loss);
    return 0;

}
#include <stdio.h>
int main()
{
    int qnty, dis;
    float r, tot;
    printf("Enter the quantity and rate:");
    scanf("%d%f", &qnty, &r);
    if(qnty>1000)
    dis=10;
    else 
    dis=0;
    tot=(qnty*r)-(qnty*r*dis/100);
    printf("Total is:%f\n", tot);
    return 0;

}
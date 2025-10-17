#include <stdio.h>
int main()
{
    int hra, da, gs, bs;
    printf("Enter the basic salary amount:");
    scanf("%d", &bs);
    if(bs<1500)
    {
        hra= bs*10/100;
        da= bs*90/100;
    }
    else
    {
        hra= 500;
        da= bs*98/100;
    

    }
    gs= bs+ hra+ da;
    printf("here is your gross salary:%d\n", gs);
    return 0;

}
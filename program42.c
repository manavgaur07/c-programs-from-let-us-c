#include <stdio.h>
int main()
{
    int num, temp;
    int octal=0, place=1;

    printf("Enter an integer:");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
{

        int remainder= temp%8;
        octal= octal + remainder * place;
        temp = temp/8;
        place = place * 10;
    
    
}
printf("octal equivalent of %d is %d\n", num, octal);
    return 0;
}
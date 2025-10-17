#include <stdio.h>
int main()
{
    int integer;
    printf("Enter the integer:");
    scanf("%i", &integer);
    if(integer%2==0)
    printf("the integer is even.");
    else
    printf("the integer is odd.");
    return 0;
}
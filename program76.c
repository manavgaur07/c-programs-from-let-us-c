#include <stdio.h>
int main()
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int numb[20];
    printf("Enter the twenty numbers");
    for( int i = 0; i<20; i++) {
    scanf("%d", &numb[i]);
    }
    for(int i = 0; i<20; i++){
    if(numb[i]<0)
    negative++;
    else if(numb[i]>0)
    positive++;
    else
    zero++;
}
printf("%d positive number\n", positive);
printf("%d negative number\n", negative);
printf("%d zero number\n", zero);
    return 0;
}
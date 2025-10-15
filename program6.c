#include<stdio.h>
int main()
{
    int amt, total, nohun, noten, noone, nofifty, nofive, notwo;
    printf("Enter the amount ");
    scanf("%i", &amt);
    nohun= amt%100;
    amt= amt/100;
    nofifty= amt%50;
    amt=amt/50;
    noten= amt%10;
    amt= amt/10;
    notwo= amt%2;
    amt= amt/2;
    noone= amt%1;
    amt= amt/1;
    nofive= amt%5;
    amt=amt/5;
    total= nohun+nofifty+noten+noone+nofive+notwo;
    printf("notes would be:%i", total);
}
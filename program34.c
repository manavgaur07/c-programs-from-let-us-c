#include <stdio.h>
int main()
{
    float sal;
    printf("Enter the salary");
    scanf("%f", &sal);
    (sal >= 25000) ?printf("Manager\n"):
    (sal >= 15000 && sal < 25000) ?printf("Accountant\n")
        :printf("Clerk\n");
    
    printf("%f\n", sal); 
       return 0;

}
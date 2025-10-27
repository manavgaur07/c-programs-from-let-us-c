#include <stdio.h>
int main()
{
    int positive = 0, negative = 0, zero = 0;
    int num;
    char choice = 'y';

    printf("this program count positive, negative and zero numbers.\n");
    while (choice == 'y' || choice == 'Y') {
    
        printf("Enter the number:\n");
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
        printf("\ndo you want to add another number(y/n)");
        scanf(" %c", &choice);
    }
    printf("\n------result-----\n");
    printf("positive number- %d\n", positive);
    printf("negative number- %d\n", negative);
    printf("zero number- %d\n", zero);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, d1, d2, sum, subt, product;
    float quotient;
    while(5){
    printf("what do you want to perform?\n");
    printf("\n1. addition\n");
    printf("\n2. substraction\n");
    printf("\n3. multiplication\n");
    printf("\n4. division\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("\nEnter digit 1:\n");
        scanf("%d", &d1);
        printf("\nEnter digit 2:\n");
        scanf("%d", &d2);
        sum= d1+d2;
        printf("Sum Of The Digits Are: %d\n", sum);
        break;
                case 2:
        printf("\nEnter digit 1:\n");
        scanf("%d", &d1);
        printf("\nEnter digit 2:\n");
        scanf("%d", &d2);
        subt= d1-d2;
        printf("Difference Of The Digits Are: %d\n", subt);
        break;
                case 3:
        printf("\nEnter digit 1:\n");
        scanf("%d", &d1);
        printf("\nEnter digit 2:\n");
        scanf("%d", &d2);
        product= d1*d2;
        printf("Product Of The Digits Are: %d\n", product);
        break;
                case 4:
        printf("\nEnter digit 1:\n");
        scanf("%d", &d1);
        printf("\nEnter digit 2:\n");
        scanf("%d", &d2);
        quotient= d1+d2;
        printf("Quotient Of The Digits Are: %.2f\n", quotient);
        break;
        case 5:
        exit(0);
        default:
        printf("wrong choice\n");
    }
    }
    return 0;
}
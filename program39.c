#include <stdio.h>
int main()
{
    int sum, remainder, temp, num;
    num = 1;
    printf("Here are the armstrong number in 1 to 500\n");
    while (num <= 500)
    {
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }
        if (sum == num)
            printf("%d\n", num);
        num++;
    }
}
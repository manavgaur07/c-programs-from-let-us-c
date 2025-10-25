#include <stdio.h>
int main()
{
    char value;
    printf("Enter the value:");
    scanf("%c", &value);
    (value >= 'a' && value <= 'z')
        ? printf("It is a lowercase alphabet")
        : printf("its not a lowercase alphabet");
//second part
    char ch;
    printf("Enter the value:");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')
        ? printf("it is not a symbol")
        : printf("it is a symbol");

    return 0;
}
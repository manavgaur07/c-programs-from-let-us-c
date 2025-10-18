#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character from the keyboard:");
    scanf("%c", ch);
    if (ch>=65 && ch<=90)
    printf("entered character is a upper case.");
    if (ch>=97 && ch<=122)
    printf("entered character is a lower case.");
    if (ch>=97 && ch<=122)
    printf("entered character is a number.");
     if ( ( ch >= 0 && ch < 48 ) || ( ch > 57 && ch < 65 ) || ( ch > 90 && ch < 97 ) || ch < 122 )
    printf("entered character is a symbol.");

}
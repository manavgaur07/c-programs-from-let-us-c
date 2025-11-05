#include <stdio.h>

int main() {
    char text[200], ch;
    int i, count = 0;

    printf("Enter a line of text: ");
    scanf("%[^\n]", text);   

    printf("Enter the character to count: ");
    scanf(" %c", &ch);      

    for(i = 0; text[i] != '\0'; i++)
        if(text[i] == ch)
            count++;

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}

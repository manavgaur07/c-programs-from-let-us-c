#include <stdio.h>
#include <string.h>

int main() {
    char isbn[20], digits[11];
    int i, j = 0, sum = 0, check;
while(2) {
    printf("Enter ISBN number (with or without hyphens): ");
    scanf("%s", isbn);
    for(i = 0; isbn[i] != '\0'; i++) {
        if(isbn[i] >= '0' && isbn[i] <= '9')
            digits[j++] = isbn[i];
    }
    digits[j] = '\0';
    if(j != 10) {
        printf("Invalid ISBN — must have 10 digits.\n");
        return 0;
    }
    for(i = 0; i < 9; i++)
        sum += (i + 1) * (digits[i] - '0');

    check = sum % 11;
    if(check == (digits[9] - '0'))
        printf("Valid ISBN number.\n");
    else
        printf("Invalid ISBN number.\n");
}
    return 0;
}

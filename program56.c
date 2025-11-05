#include <stdio.h>

int main() {
    int marks[100][3];      
    int total[100];         
    int roll, i, j;

    int highSub[3] = {0};   
    int highRoll[3] = {0};  

    int highestTotal = 0;
    int topperRoll = 0;

    printf("Enter marks of 100 students (3 subjects each):\n");
    for (i = 0; i < 100; i++) {
        printf("\nRoll No %d:\n", i + 1);
        total[i] = 0;
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
            if (i == 0 || marks[i][j] > highSub[j]) {
                highSub[j] = marks[i][j];
                highRoll[j] = i + 1;
            }
        }
        if (i == 0 || total[i] > highestTotal) {
            highestTotal = total[i];
            topperRoll = i + 1;
        }
    }
    printf("\nTotal Marks of Each Student:\n");
    for (i = 0; i < 100; i++)
        printf("Roll No %d: %d\n", i + 1, total[i]);
    printf("\nHighest Marks in Each Subject:\n");
    for (j = 0; j < 3; j++)
        printf("Subject %d: %d (by Roll No %d)\n", j + 1, highSub[j], highRoll[j]);
    printf("\nStudent with Highest Total Marks:\n");
    printf("Roll No %d with %d marks\n", topperRoll, highestTotal);

    return 0;
}

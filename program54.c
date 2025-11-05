#include <stdio.h>

int main() {
    int count[6] = {0};
    int ballot, spoilt = 0, total, i;
    printf("Enter total number of votes cast: ");
    scanf("%d", &total);
    printf("Enter the candidate number on each ballot (1-5):\n");
    for (i = 1; i <= total; i++) {
        scanf("%d", &ballot);

        if (ballot >= 1 && ballot <= 5)
            count[ballot]++; 
        else
            spoilt++;         
    }
 printf("\nElection Results:\n");
    for (i = 1; i <= 5; i++)
        printf("Candidate %d received %d votes.\n", i, count[i]);

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}
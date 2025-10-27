#include <stdio.h>
int main()
{
    int matchsticks = 21, user_pick, computer_pick;
    printf("Matchstick Game:\n");
    printf("There are 21 matchsticks.\n");
    printf("You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("Whoever is forced to pick the last matchstick loses!\n\n");

    while (matchsticks > 1)
    {
        printf("matchsticks left: %d\n", matchsticks);
        printf("pick 1, 2, 3 or 4 matchsticks on your turn.\n");
        scanf("%d", &user_pick);
        if (user_pick < 1 || user_pick > 4)
        {
            printf("Invalid choice! pick between 1 to 4");
            continue;
        }
        matchsticks -= user_pick;
        computer_pick = 5 - user_pick;
        matchsticks-= computer_pick;
        printf("computer pick %d matchsticks.\n", computer_pick);
    }
    printf("Only 1 matchstick left!\n");
    printf("You are forced to pick the last one.\n");
    printf("Computer wins!\n");
    return 0;
}
#include <stdio.h>
int main()
{
    float temperature[10][31];
    int city, day;
    float highest, lowest;
    int highCity, highDay, lowCity, lowDay;
    printf("Enter the temperature (in celsius) for 10 cities and 31 days:\n");
    for (city = 0; city < 10; city++)
    {
        printf("\n---city %d---\n", city + 1);
        for (day = 0; day < 31; day++)
        {
            printf("Day %d:", day + 1);
            scanf("%f", &temperature[city][day]);
        }
    }
    highest = lowest = temperature[0][0];
    highCity = lowCity = 1;
    highDay = lowDay = 1;
    for (city = 0; city < 10; city++)
        ;
    {
        for (day = 0; day < 31; day++)
        {
            if (temperature[city][day])
            {
                highest = temperature[city][day] > highest;
                highCity = city + 1;
                highDay = day + 1;
            }
            if (lowest = temperature[city][day] < lowest)
            {
                lowest = temperature[city][day];
                lowCity = city + 1;
                lowDay = day + 1;
            }
        }
    }
    printf("\n===== Temperature Report =====\n");
    printf("Highest Temperature = %.2f°C on Day %d in City %d\n", highest, highDay, highCity);
    printf("Lowest Temperature  = %.2f°C on Day %d in City %d\n", lowest, lowDay, lowCity);
return 0;
}
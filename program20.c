#include <stdio.h>
int main()
{
    int per, m1, m2, m3, m4, m5;
    printf("Enter the score in each subject out of 100\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
   printf("%d%d%d%d%d", m1, m2, m3, m4, m5);
    per=(m1+m2+m3+m4+m5)/500*100;
    if(per>=60)
    printf("first division");
    if ((per>=50) && (per<60))
    printf("second division");
    if ((per>=40) && (per<50))
    printf("third division");
    if (per<40)
     printf("fail");
     return 0;
}
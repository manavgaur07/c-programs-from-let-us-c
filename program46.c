#include <stdio.h>
int main()
{
    int n,i;
    float s,x;
    printf("Enter the number of terms you want to perform sum");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%f",&x);
    i=1;
    s=0;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            s+=((x-1)/x);
        }
        else
        {
            s+=0.5*((x-1)/x);
        }
        
    }
    printf("%f",s);

}
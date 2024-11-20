// Program to calculate the sum of a maximum of 10 numbers
// Negative numbers are skipped from the calculation

#include<stdio.h>
int main()
{
    //float i;
    double i,n,sum=0.0;
    for(i=1; i<=5; ++i)
    {
        printf("Enter a number%.0lf:",i);
        scanf("%lf",&n);
        if(n<0.0)
        {
            continue;
        }
        sum += n;
    }
    printf("sum=%.2lf",sum);
    return 0;
}

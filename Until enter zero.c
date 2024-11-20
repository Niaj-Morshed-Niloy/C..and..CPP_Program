//program to add numbers until the users enters zero.

#include<stdio.h>
main()
{
    double n,sum=0;
    do {
        printf("Enter a number:\n");
        scanf("%lf",&n);
        sum += n;
    }
    while(n !=0.0);
    printf("sum=%.2lf",sum);
    getch();
}

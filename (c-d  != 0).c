//The program reads four values a,b,c and d from the terminal and evaluates the ratio of (a+b) to (c-d) and prints the result,if c-d is not equal to zero.

#include<stdio.h>
main()
{
    float a,b,c,d,r;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(c-d !=0 )
    {
        r=(a+b)/(c-d);
        printf("Ratio:%f",r);
    }
getch();
}

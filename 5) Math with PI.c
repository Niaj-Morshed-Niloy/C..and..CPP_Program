#include<stdio.h>
#define pi 3.1416
main()
{
    float a,b,r,G;
    scanf("%f%f%f",&a,&b,&r);
    G=(2*pi*r+r)/(2*a*b);
    printf("Answer :%f",G);
 getch();
}

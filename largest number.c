#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("largest number is a:%d",a);
        else
            printf("largest number is c:%d",c);
    }
    else
    {
        if(b>c)
            printf("largest number is b:%d",b);
        else
            printf("largest number is c:%d",c);
    }
    getch();
}

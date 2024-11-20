#include <stdio.h>
main()
{
    int year;
    scanf("%d",&year);
    if (((year%4 == 0)&&(year % 100!= 0))||(year%400 == 0))
        printf("leap year");
    else
    printf("Not leap year");
    getch();
}

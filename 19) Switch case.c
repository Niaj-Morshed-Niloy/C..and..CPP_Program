#include<stdio.h>
main()
{
    int x=3;
    switch(x)
    {
    case 1:
        printf("value is 1");
        break;
    case 2:
        printf("Value is 2");
        break;
    case 3:
        printf("value is 3");
        break;
    default:
        printf("value is unknown");
    }
    getch();
}

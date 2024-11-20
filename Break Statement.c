#include<stdio.h>
main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Welcome ");
        if(i==1)
            break;
        printf("BITC\n");
    }
    getch();
}

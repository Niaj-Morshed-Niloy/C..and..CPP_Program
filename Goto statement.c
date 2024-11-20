#include<stdio.h>
main()
{
    int i=1;
    niaj:
    printf("%d\n",i);
    i++;
    if(i<5)
        goto niaj;
    getch();
}

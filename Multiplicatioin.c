//Write a c program to print multiplication table of a number.

#include<stdio.h>
main()
{
 int i=1,n,M;
 scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,(n*i));
        i++;
    }
    getch();
}


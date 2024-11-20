//WRITE a c program to print all even numbers between 1 to 100.

#include<stdio.h>
main()
{
    int i=2;  //ODD number when take i=1//
    while(i<=100)
    {
        printf("%d\n",i);
        i=i+2;
    }
    getch();
}

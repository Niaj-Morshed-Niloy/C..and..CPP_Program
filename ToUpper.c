//Lower letter to upper letter.
#include<stdio.h>
main()
{
    char lower,upper;
    printf("Enter lower letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("Uppercase letter:%c",upper);
    getch();
}


//Uppercase to lowercase.
#include<stdio.h>
main()
{
    char lower,upper;
    printf("Enter upper letter:");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("Lowercase letter:%c",lower);
    getch();
}


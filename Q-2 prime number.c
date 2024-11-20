//Write a c program to find out the prime number of given integer a,where a=8.



#include<stdio.h>
main()
{
    int a=8,count=0,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("prime Number\n");
    else
        printf("Not Prime Number");
    return 0;
}

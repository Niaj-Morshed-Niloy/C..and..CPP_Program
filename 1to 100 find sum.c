//Write a c program to find the sum of first 100 natural numbers.
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++){
        sum=sum+i;
    printf("%d\n",i);
    }
    printf("sum is :%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,gcd,lcd,rem,num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcd=(num1*num2)/gcd;
    printf("GCD=%d\n",gcd);
    printf("Lcd=%d",lcd);
    return 0;
}

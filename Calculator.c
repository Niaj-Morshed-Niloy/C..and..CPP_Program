//Program to create a simple calculator.
#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;
  
    scanf("%c",&operation);
   
    scanf("%lf%lf",&n1,&n2);
    switch(operation)
    {
    case'+':
        printf("%lf+%lf=%lf",n1,n2,n1+n2);
        break;
    case'-':
        printf("%lf-%lf=%lf",n1,n2,n1-n2);
        break;
    case'*':
        printf("%lf*%lf=%lf",n1,n2,n1*n2);
        break;
    case'/':
        printf("%lf/%lf=%lf",n1,n2,n1/n2);
        break;
    default:
        printf("Error");
    }
    return 0;

}

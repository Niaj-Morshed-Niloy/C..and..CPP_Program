#include<stdio.h>
int main()
{
    char operation;
    double n1,n2,n3;
   // printf("Enter an operation(+,-,*,/):");
    scanf("%c",&operation);
   // printf("Enter two operands:");
    scanf("%lf%lf%lf",&n1,&n2,&n3);
    switch(operation)
    {
    case'+':
        printf("%lf+%lf+%lf=%lf",n1,n2,n3,n1+n2+n3);
        break;
    case'-':
        printf("%lf-%lf-%lf=%lf",n1,n2,n3,n1-n2-n3);
        break;
    case'*':
        printf("%lf*%lf*%lf=%lf",n1,n2,n3,n1*n2*n3);
        break;
    case'/':
        printf("%lf/%lf/%lf=%lf",n1,n2,n3,n1/n2/n3);
        break;
    default:
        printf("Error");
    }
    return 0;

}


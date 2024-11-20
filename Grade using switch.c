//Grade Marks

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter  Marks = ");
    scanf("%d", &marks);
    switch (marks)
    {
    case 80 ... 100:
        printf("Your Grade is A+\n");
        break;
    case 70 ... 79:
        printf("Your Grade is A\n");
        break;
    case 60 ... 69:
        printf("Your Grade is A-\n");
        break;
    case 50 ... 59:
        printf("Your Grade is B\n");
        break;
    case 40 ... 49:
        printf("Your Grade is C\n");
        break;
    case 33 ... 39:
        printf("Your Grade is D\n");
        break;
    case 0 ... 32:
        printf("Your Grade is Fail\n");
        break;
    default:
        break;
    }
    return 0;
}

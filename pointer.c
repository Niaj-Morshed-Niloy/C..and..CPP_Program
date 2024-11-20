#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Address stored in a variable p is:%x\n",p);
    printf("value stored in a variable p is: %d\n",*p);
    return 0;
}

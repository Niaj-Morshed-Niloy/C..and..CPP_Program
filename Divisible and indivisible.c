#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0)
    {
        if(a%3==0){
            printf("by 3 and 5");
        }
        else{
            printf("by 5 not 3");
        }
    }
    else if(a%3==0)
    {
        printf("by 3 not 5");
    }
    else
    {
        printf("not 3 and 5");
    }
    return 0;
}

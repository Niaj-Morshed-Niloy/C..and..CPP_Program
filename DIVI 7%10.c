#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%7==0)
        {
        if(a%10==0){
            printf("divi by 7 and 10");
        }
        else
        {
            printf("divi by 7 not 10");
        }
    }
    else if(a%10==0){
        printf("by 10 not 7");
    }
    else{
        printf("not 7 and 10");
    }
    return 0;
}

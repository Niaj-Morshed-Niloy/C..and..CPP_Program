#include<stdio.h>
int main()
{
    int i,max=0,a[7]={-99,45,100,37,89,-327,245};
    for(i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}

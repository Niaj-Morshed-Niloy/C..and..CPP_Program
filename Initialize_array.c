//write a program to initialize array at run time.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[4];
    int i,j;
    printf("Enter array element:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Value is array:");
    for(j=0;j<4;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}

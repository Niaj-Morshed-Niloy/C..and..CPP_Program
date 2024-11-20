#include<stdio.h>
main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\n",i);
        sum=sum+i;
        i--;

    }
    printf("%d is sum",sum);
    getch();
}

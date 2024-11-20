#include<stdio.h>
main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y)
    {
        if(x<z)
            printf("smallest num:%d",x);
        else
            printf("smallest num:%d",z);

    }
    else
    {
        if(y<z)
            printf("smallest n:%d",y);
        else
            printf("smallest num:%d",z);
    }
    getch();
}

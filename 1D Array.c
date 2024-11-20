//Matrix addition and substraction.

#include<stdio.h>
int main()
{
    int i,j,numofrows,numofcols,a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows and cols:");
    scanf("%d%d",&numofrows,&numofcols);
    printf("Enter elements for A Matrix\n");
    for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

printf("Enter elements for B Matrix\n");
    for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
printf("A=");
for(i=0;i<numofrows;i++)
{
    printf("\t");
    for(j=0;j<numofcols;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}
printf("\nB=");
for(i=0;i<numofrows;i++)
{
    printf("\t");
    for(j=0;j<numofcols;j++)
    {
        printf("%d",b[i][j]);
    }
    printf("\n");
}
for(i=0;i<numofrows;i++)
{
    for(j=0;j<numofcols;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("a+b=");
for(i=0;i<numofrows;i++)
{
    printf("\t");
    for(j=0;j,numofcols;j++)
    {
        printf("%d",c[i][j]);
    }
    printf("\n");
}
for(i=0;i<numofrows;i++)
{
    for(j=0;j<numofcols;j++)
    {
        c[i][j]=a[i][j]-b[i][j];
    }
}
printf("a-b=");
for(i=0;i<numofrows;i++)
{
    printf("\t");
    for(j=0;j,numofcols;j++)
    {
        printf("%d",c[i][j]);
    }
    printf("\n");
}
return 0;
}

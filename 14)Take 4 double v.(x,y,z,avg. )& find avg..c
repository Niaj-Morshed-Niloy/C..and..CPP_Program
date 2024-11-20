#include <stdio.h>
main()
{
    double x,y,z,avg;
    printf("Enter the value:x,y,z\n");
    scanf("%lf%lf%lf",&x,&y,&z);
    avg=(x+y+z)/3;
    printf("Average is:%lf",avg);
    getch();
}

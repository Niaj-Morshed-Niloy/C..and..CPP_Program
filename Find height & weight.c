//The program counts the number of boys whose weight is less than 50kg and height is greater than 170 cm.

#include<stdio.h>
main()
{
    float c=0,i,w,h;
    printf("Enter weight and height for 3  boys\n");
    for (i=1; i<=3; i++)
    {
        scanf("%f%f",&w,&h);
        if(w<50 && h>170)
            c=c+1;
    }
    printf("Number of boys: %.0f\n",c);
    getch();
}

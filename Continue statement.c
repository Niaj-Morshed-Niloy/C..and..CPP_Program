#include<Stdio.h>
main()
{
    int i;
    for (i=0; i<3; i++)
    {
        printf("Hi\n");
        if(i==1)
            continue;
        printf("Hello\n");
    }
    getch();
}

//Write a c program to calculate the sum following series-
     //2^3+4^3+6^3+……+n^3

     #include<stdio.h>
     main()
     {
         int i,n,sum=0;
         scanf("%d",&n);
         for(i=2;i<=n;i=i+2)
         {
             sum+=i*i*i;
         }
         printf("result=%d",sum);
         getch();
     }

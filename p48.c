#include<stdio.h>
main()
{
   int x[10],i,k,sum=0,avg;
   printf("Enter the limit ");
   scanf("%d",&k);
   printf("Enter the array");
   for(i=0;i<k;i++)
   {
       scanf("%d",&x[i]);
   }
   for(i=0;i<k;i++)
   {
    sum=sum+x[i];
   }
    avg=sum/2;
    printf("%d",avg);
}

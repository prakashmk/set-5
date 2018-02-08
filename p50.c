#include <stdio.h>
int main()
{   int n,temp,flag;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    flag=0;
    while(temp!=1)
    {
        if(n%2!=0)
          flag=1;
          break;
     }  
     if(flag==0)
        {
           printf("the given number is power of 2:%d",n);
         }
     else
   {
    printf("the given number is not a power of 2:%d",n);
    }
    return 0;
}

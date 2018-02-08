#include <stdio.h>
void main()
{  long long a;
   int count=0;
   printf("Enter the number: ");
   scanf("%d",&a);
   while(a!=0)
  { 
  a=a/10;
  ++count;
  }
    printf("The count of digits in a number:%d",count);
}

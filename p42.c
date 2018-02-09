#include<stdio.h>
void main()
{
 int i;
 int c1=0,c2=0;
 char str1[20],str2[20];
 printf("Enter string : ");
 gets(str1);
  printf("Enter string : ");
 gets(str2);
 for(i=0; str1[i]!=NULL; i++)
 {
   c1++;
 }
 for(i=0; str2[i]!=NULL; i++)
{
   c2++;
}
 if(c1>c2)
 {
   printf("\n%s",str1);
 }
else
   printf("\n%s",str2);
}

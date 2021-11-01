//WAP to find factorial of a number
#include<stdio.h>
int main()
{
   int n,i,f=1;
   printf("enter a nonzero positive number....");
   scanf("%d",&n);
   if(n>0)
   {
       for(i=n;i>0;i--)
             f=f*i;
   }
   else
       printf("enter a nonzero positive number....");

   printf("The factorial of the number %d is %d....",n,f);
   return 0;
}


#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,sum=0;
   printf("Input a number....");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",i);
       sum=sum+i;
   }
    printf("\nThe Sum of natural numbers uoto %d is %d",n,sum);
    getch();
   return 0;
}



#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n,temp,rem,sum=0;
   printf("Input a number....");
   scanf("%d",&n);
   temp=n;
   while(temp>0)
   {
       rem=temp%10;
       sum=sum+pow(rem,3);
       temp/=10;
   }
   if(sum==n)
    printf("%d is a armstrong number",n);
    else
        printf("%d is not a armstrong number",n);
    getch();
   return 0;
}



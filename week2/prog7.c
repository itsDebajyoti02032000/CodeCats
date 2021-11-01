//WAP to find number of zeroes at the end of the  factorial of that numbers of a set
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n,i,temp,count;
   long int a[n];
   printf("enter number of  input....");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",(a+i));
    printf("\n");
   for(i=0;i<n;i++)
   {
     temp=a[i];
     count=0;
    while(temp>0)
       {
           count=count+(temp/5);
           temp/=5;

       }
      a[i]=count;
   }
   for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    getch();
   return 0;
}



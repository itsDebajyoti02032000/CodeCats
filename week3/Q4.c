#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k,n;
  printf("Enter the no of rows....");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
    {
     if(j==i || j==n+1-i)
          printf("*");
     else
          printf(" ");
    }
      printf("\n");
  }
}

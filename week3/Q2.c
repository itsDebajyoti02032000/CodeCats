#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n;
  printf("Enter the no of rows....");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=i;j--)
      printf(" * ");
      printf("\n");
  }
}

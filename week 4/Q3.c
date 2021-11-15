#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void rotation(int a[],int,int);
int main()
{
  int n=5,d;
  int arr[n],x,i;
  for(i=0;i<=n-1;i++)
    scanf("%d",&arr[i]);
   printf("Enter the rotation point..");
   scanf("%d",&d);
   rotation(arr,d,n);
    for(i=0;i<=n-1;i++)
    printf("%d  ",arr[i]);

}
void rotation(int arr[],int d,int n)
{
    int temp[d],i,j;
    for(i=0;i<d;i++)
        temp[i]=arr[i];
    for(i=0;i<n-d;i++)
        arr[i]=arr[i+d];
    for(j=0;j<d;j++)
    {
        arr[i]=temp[j];
         i++;
     }
}


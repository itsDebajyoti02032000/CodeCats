#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int pairsum(int a[],int,int);
int searchElement(int a[],int,int);
int main()
{
  int capacity=5;
  int arr[capacity],x,i;
  for(i=0;i<capacity;i++)
    scanf("%d",&arr[i]);
  printf("enter the sum value to check....");
  scanf("%d",&x);
  if(!pairsum(arr,capacity,x))
    printf("invalid sum");
    return 0;

}
int pairsum(int arr[],int capacity,int x)
{
    int i,j,sum=0;
    for(i=0;i<(capacity-1);i++)
    {
     for(j=i+1;j<capacity;j++)
     {
         if(arr[j]+arr[i]==x){
            printf("[%d,%d]",i,j);
             return 1;
         }
     }
    }
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
  int capacity,sum=0,i;
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d",&capacity);
  int arr[capacity];
  printf("Enter %d elements in the array",capacity);
  for(i=0;i<capacity;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<capacity;i++)
        sum=sum+arr[i];
     printf("%d ",sum);
    sum=0;
     for(i=0;i<capacity;i++)
     {
         if(arr[i]%2==0)
        sum=sum+arr[i];
     }
     printf("%d ",sum);
     sum=0;
       for(i=0;i<capacity;i++)
     {
         if(arr[i]%2!=0)
        sum=sum+arr[i];
     }
     printf("%d ",sum);
     sum=0;
     for(i=0;i<capacity;i=i+2)
        sum=sum+arr[i];
       printf("%d ",sum);
     sum=0;
      for(i=1;i<capacity;i=i+2)
        sum=sum+arr[i];
       printf("%d ",sum);

}


#include<stdio.h>
#include<conio.h>
int max(int arr[],int n);
int min(int arr[],int n);
int main()
{
   int n;
    printf("Enter the size of array....");
    scanf("%d",&n);
    int arr[n],i,count=0;
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The maximum element of the array: %d",max(arr,n));
    printf("\nThe miximum element of the array: %d",min(arr,n));
    return 0;
}
int max(int arr[],int n)
{
    int i,max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}
int min(int arr[],int n)
{
    int i,min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    return min;
}

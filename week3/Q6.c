#include<stdio.h>
#include<conio.h>
int main()
{
   int n,m;
    printf("Enter the size of array....");
    scanf("%d",&n);
    int arr[n],i,count=0;
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the input number..");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
            count++;
    }
      if(count!=0)
        printf("%d",count);
      else
        printf("%d\nThe number isnot present in the array..",count);
     return 0;
}

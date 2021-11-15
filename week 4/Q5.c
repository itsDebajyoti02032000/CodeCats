#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void swap(int* p,int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int arr[9];
    int i,j;
    for(i=0;i<=8;i++)
    scanf("%d",&arr[i]);
     for(i=0;i<8;i++)
       {
           for(j=i+1;j<9;j++)
           {
               if(arr[j]<arr[i])
                swap(&arr[j],&arr[i]);
           }
       }
    for(i=0;i<=8;i++)
    printf("%d ",arr[i]);

    return 0;
}

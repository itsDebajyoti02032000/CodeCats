#include<stdio.h>
#include<conio.h>
int main()
{
    int cap,i;
    scanf("%d",&cap);
    int a[cap];
    for(i=0;i<cap;i++)
        scanf("%d",&a[i]);
    for(i=cap-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;

}

#include<stdio.h>
#include<conio.h>
int main()
{

    int x,y,i,f=1;
    printf("Input the numbers....");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
     f=f*x;
    }
    printf("%d^%d : %d",x,y,f);
    getch();
    return 0;
}
/*OUTPUT:
Input the numbers....2 4
2^4 : 16*/

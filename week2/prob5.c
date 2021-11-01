#include<stdio.h>
#include<conio.h>
int main()
{

    int n,temp,i=0;
    printf("enter the number....");
    scanf("%d",&n);
    printf("The number in reverse order is  ");
    while(n>0){
        temp=n%10;
        printf("%d",temp);
        n=n/10;
    }
   getch();
   return 0;
}
/*OUTPUT:
enter the number....12345
The number in reverse order is  54321*/

//WAP to check whether a number is prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
     if(n%i==0)
     {
        flag=1;
        break;
     }
    }
    if(flag==0)
       printf("the number is prime");
    else
       printf("the number is not prime");
    getch();
    return 0;
}

/*output:
enter a number 13
the number is prime
*/

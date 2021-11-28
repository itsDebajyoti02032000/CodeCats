#include<iostream>
using namespace std;
int main()
{
    char strA[]="abcd";
    char strB[]="cdbae";
    int i,flag,j;
    for(i=0;strB[i]!='\0';i++)
    {
        flag=0;
        for(j=0;strA[j]!='\0';j++)
        {
            if(strB[i]==strA[j])
              {
               flag=1;
                break;
              }
        }
        if(flag==0)
            cout<<strB[i];
    }
    return 0;
}

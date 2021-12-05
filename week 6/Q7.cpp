#include <bits/stdc++.h>
using namespace std;

int has1[26];
int has2[26];
int mod(int i)
{
    if(i<0)
        return -i;
    return i;
}

int main()
{
    string a = "aaaa";
    string b = "bccb";
    int i=0,j,flag=0;
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        j=a[i]-'a';
        ++has1[j];
    }
    i=0;
     while(b[i]!='\0')
    {
        if(b[i]>='a' && b[i]<='z')
        j=b[i]-'a';
        ++has2[j];
    }
    for(i=0;i<26;i++)
    {
    if (mod(has1[i]-has2[i])<=4)
        continue;
    else
          flag=1;
          break;
    }

    if (flag==0)
        cout<<"YES"<< endl;
    else
        cout<<"NO"<< endl;
    return 0;
}

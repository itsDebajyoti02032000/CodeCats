#include <iostream>
#include<string>
using namespace std;
void longSubWithk(string str,int k)
{
    int n=str.length();
    int hash[26]={0};
    for(int i=0;i<n;i++)
      hash[str[i]-'a']++;

    for(int i=0;i<n;i++)
    {
        if(hash[str[i]-'a']>=k)
            cout<<str[i];
    }


}
int main()
{
    string str="geeksforgeeks";
    int k;
    cin>>k;
    longSubWithk(str,k);
    return 0;
}

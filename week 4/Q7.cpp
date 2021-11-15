#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x0,n;
        cin>>x0>>n;
        int i=1;
        while(n--)
        {
            if(x0%2==0)
                x0=x0-i;
            else
                x0=x0+i;
          i++;
        }
        cout<<x0<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
void searchInsertPosition(int a[]);

void searchInsertPosition(int a[])
{
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        for(int i=0;i<4;i++)
        {
            if(k==a[i])
                cout<<i<<endl;
        }
        for(int i=0;i<4;i++)
        {
                if(k>a[i] && k<a[i+1])
                    cout<<i+1;
                break;
        }
    }
}
int main()
{
    int a[]={1,3,5,6};
    searchInsertPosition(a);
    return 0;
}

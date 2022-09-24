#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int zero=0,neg=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                zero++;
            }
            else if(a[i]<0)
            {
                neg++;
            }
        }
        if(zero>0 || neg%2==0)
        {
            cout<<'0'<<endl;
        }
        else
        {
            cout<<'1'<<endl;
        }
    }
}

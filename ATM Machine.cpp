#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>b;
            k=k-b;
            if(k<0)
            {
                k=k+b;
                a[i]=0;
            }
            else
            {
                a[i]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }
}

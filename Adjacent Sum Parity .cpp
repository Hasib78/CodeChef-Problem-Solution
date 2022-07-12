#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000];
    int t,n,i;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

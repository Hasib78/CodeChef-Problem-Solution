#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,m,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=0;
        long long int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            sum=sum+max(abs((arr[i]-1)),abs((arr[i]-m)));
        }
        cout<<sum<<endl;
    }
}

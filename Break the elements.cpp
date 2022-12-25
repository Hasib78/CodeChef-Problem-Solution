#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],count=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                count++;
            }
        }
        if(count==n || count==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}



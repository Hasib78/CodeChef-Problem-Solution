#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[100000];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int count=1,m=1;
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
                if(count>m)
                {
                   m=count;
                }

            }
            else
            {

                count=1;
            }
        }
        x=n-m;
        cout<<x<<endl;
    }
}

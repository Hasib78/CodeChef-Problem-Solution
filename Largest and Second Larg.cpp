#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        sum=v[0];

        for(i=1;i<n;i++)
        {
            if(v[0]!=v[i])
            {
                sum+=v[i];
                break;
            }
        }
        cout<<sum<<endl;

    }
}

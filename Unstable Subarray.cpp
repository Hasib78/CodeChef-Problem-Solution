#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int x,y,n,t,i;

    cin>>t;
    while(t--)
    {
        cin>>n;

        vector<int>v(n);
        map<int,int>mp;
        for(i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        x=(n*(n-1))/2;

        if(mp.size()==n)
        {
            cout<<x<<endl;

        }
        else
        {
            int count=0;
            for(auto it:mp)
            {
                if(it.second>1)
                {
                    y=it.second;
                    y=(y*(y-1))/2;
                    count+=y;
                }
            }
            x=x-count;
            cout<<x<<endl;

        }



    }
}

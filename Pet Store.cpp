#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        int count=1;
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            for(i=0; i<n-1; i++)
            {
                if(v[i]==v[i+1])
                {
                    count++;
                }
                else
                {
                    if(count%2==0)
                    {
                        count=1;
                        continue;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(i==n-1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
}

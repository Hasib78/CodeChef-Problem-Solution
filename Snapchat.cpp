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
        vector<int>v1(n);
        int count=0,max=0;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(i=0;i<n;i++)
        {
            if(v[i]>0 && v1[i]>0)
            {
                count++;
            }
            else
            {
                if(count>max)
                {
                    max=count;
                }
                count=0;
            }
        }
        if(max>count)
        {
           cout<<max<<endl;
        }
        else{
            cout<<count<<endl;
        }

    }

}

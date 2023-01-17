#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,y,i;
    cin>>t;
    while(t--)
    {

        cin>>n>>y;
        vector<int>v(n);
        int a=0,b,c;
        for(i=0; i<n; i++)
        {
            cin>>v[i];
            a=(a|v[i]);

        }
        if(y>=a)
        {
           b=y-a;
           c=(a|b);
           if(c==y)
           {
               cout<<b<<endl;
           }
           else{
            cout<<"-1"<<endl;
           }

        }
        else{
            cout<<"-1"<<endl;
        }

    }
}

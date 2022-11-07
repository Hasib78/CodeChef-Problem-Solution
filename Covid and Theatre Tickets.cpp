#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%2==0)
        {
            x=n/2;
        }
        else
        {
            x=(n+1)/2;
        }
        if(m%2==0)
        {
            y=m/2;
        }
        else
        {
            y=(m+1)/2;
        }
            cout<<x*y<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,x,y,l,m,n;

    cin>>t;
    while(t--)
    {
        cin>>h>>x>>y;
        n=h-y;
        if(n==0)
        {
            cout<<"1"<<endl;
        }
        else
        {

            l=n%x;
            m=n/x;
            if(l==0)
            {
                cout<<m+1<<endl;
            }
            else
            {
                cout<<m+2<<endl;
            }
        }
    }
}

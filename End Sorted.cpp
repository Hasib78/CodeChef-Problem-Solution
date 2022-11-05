#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[100000];
        int x=n,y=n;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                if(i<=x)
                {
                    x=i;
                }


            }
            else if(a[i]==n)
            {
                y=i;
            }

        }
        if(x==1 && y==n)
        {
            cout<<"0"<<endl;
        }
        else if( y>=1 && y<x)
        {
            p=x-1;
            q=n-y-1;
            cout<<p+q<<endl;
        }
        else
        {
            p=x-1;
            q=n-y;
            cout<<p+q<<endl;
        }



    }
}

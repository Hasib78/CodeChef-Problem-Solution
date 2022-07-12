#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,x,y,z,p,mi;
    cin>>t;
    while(t--)
    {
        cin>>s>>x>>y>>z;
        mi=max(x,y);
        p=s-(x+y);
        if(p>=z)
        {
            cout<<"0"<<endl;
        }
        else
        {
            p+mi>=z?cout<<"1"<<endl:cout<<"2"<<endl;
        }

    }
}

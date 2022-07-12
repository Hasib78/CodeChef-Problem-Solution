#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>a;
        x<=a && a<y?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}

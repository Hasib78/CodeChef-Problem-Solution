#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=(n*90)/100;
        if(x<m)
        {
            cout<<"ONLINE"<<endl;
        }
        else if(x>m)
        {
            cout<<"DINING"<<endl;
        }
        else{
            cout<<"EITHER"<<endl;
        }



    }
}

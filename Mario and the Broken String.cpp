#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n/2;

        cin>>s;
        for(i=0,j=x;i<x,j<n;i++,j++)
        {
            if(s[i]!=s[j])
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==x)
        {
            cout<<"YES"<<endl;
        }
    }

}

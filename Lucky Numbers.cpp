#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='7')
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i==s.size())
        {
            cout<<"NO"<<endl;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        for(i=0;i<n;i+=2)
        {
            if((s[i]=='A' && s[i+1]=='B') || (s[i]=='B' && s[i+1]=='A'))
            {
                continue;
            }
            else
            {
                cout<<"no"<<endl;
                break;
            }
        }
        if(i>=n)
        {
            cout<<"yes"<<endl;
        }

    }
}

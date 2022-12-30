#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s,st;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cin>>st;
        sort(s.begin(),s.end());
        sort(st.begin(),st.end());

        if(s==st)
        {
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

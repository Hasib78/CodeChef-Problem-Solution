#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        for(i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        if(v[0]+v[1]==v[2])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

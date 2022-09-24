#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>d;
        cin>>s;
        for(i=0; i<d; i++)
        {
            if(s[i]=='5' || s[i]=='0')
            {
                cout<<"Yes"<<endl;
                break;

            }
        }
        if(i==d)
        {
            cout<<"No"<<endl;
        }
    }

}

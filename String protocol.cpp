#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int count=0;
        for(i=0; i<n; i++)
        {
            if(i<=n-2)
            {
                if(s[i]==s[i+1])
                {
                    count++;
                    i++;
                }
                else
                {
                    count++;
                }
            }

            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

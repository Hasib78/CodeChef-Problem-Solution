#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,c,count,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>c;
        count=0,flag=1;
        if(n*m<c)
        {

            cout<<"0"<<endl;
            flag=0;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(c%i==0)
                {
                    if(c/i<=m)
                    {
                        count++;

                    }
                }
            }

        }
        if(flag)
        {
            cout<<count<<endl;
        }

    }

}

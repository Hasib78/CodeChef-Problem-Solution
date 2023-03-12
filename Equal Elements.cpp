#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int v[n];
        int max=1,most=1;
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v,v+n);
        for(i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                max++;
                if(max>most)
                {
                    most=max;
                }
            }
            else
            {
                max=1;

            }
        }



        cout<<n-most<<endl;




    }
}

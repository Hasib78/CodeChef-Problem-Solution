#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(i=0; i<n-1; i++)
        {
            if((i%2==0) && (v[i]>v[i+1]))
            {
                swap(v[i],v[i+1]);
            }
            else if((i%2!=0) && (v[i]<v[i+1]))
            {
                swap(v[i],v[i+1]);
            }


        }
        for(i=0; i<n; i++)
        {

            cout<<v[i]<<" ";

        }
        cout<<endl;
    }
}

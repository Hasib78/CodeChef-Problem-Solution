#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i;
    cin>>t;
    while(t--)
    {
       cin>>n>>m;
       int ar[n],ar1[n];
       int sum=0;
       for(i=0;i<n;i++)
       {
           cin>>ar[i];

       }
       for(i=0;i<n;i++)
       {
           cin>>ar1[i];
       }
       for(i=0;i<n;i++)
       {
           if(ar[i]>=m)
           {
               sum=sum+ar1[i];
           }

       }
       cout<<sum<<endl;

    }


}

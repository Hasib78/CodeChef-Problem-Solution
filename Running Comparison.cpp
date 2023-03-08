#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        int ct=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>=b[i])
            {
                x=a[i]-b[i];
                if(x<=b[i])
                {
                    ct++;
                }
            }
            else
            {
                x=b[i]-a[i];
                if(x<=a[i])
                {
                    ct++;
                }
            }
        }
        cout<<ct<<endl;
    }
}

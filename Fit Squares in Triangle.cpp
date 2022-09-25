#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        a=n/2;
        for(i=a-1;i>0;i--)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
}

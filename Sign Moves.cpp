#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,sum,sum1,eve,od;
    cin>>t;
    while(t--)
    {

        cin>>n;
        eve=n/2;
        sum=eve*(eve+1);

        od =n-eve;
        sum1=od*od;
        cout<<sum-sum1<<endl;
    }
}

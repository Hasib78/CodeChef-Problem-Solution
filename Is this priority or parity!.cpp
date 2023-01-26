#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        if(a==1)
        {
            if(n%2==0)
            {
                cout<<"EVEN"<<endl;
            }
            else
            {
                cout<<"ODD"<<endl;
            }
        }
        else
        {
            if(a==2)
            {
                cout<<"ODD"<<endl;
            }
            else
            {
                cout<<"EVEN"<<endl;
            }
        }
    }
}

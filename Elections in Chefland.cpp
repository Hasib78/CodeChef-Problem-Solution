#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int n=max({a,b,c});
        if(n>50)
        {
            if(n==a)
            {
                cout<<"A"<<endl;
            }
            else if(n==b)
            {
                cout<<"B"<<endl;
            }
            else
            {
                cout<<"C"<<endl;
            }

        }
        else
        {
            cout<<"NOTA"<<endl;
        }
    }
}

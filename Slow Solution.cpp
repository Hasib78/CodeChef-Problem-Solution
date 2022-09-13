#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,mt,n,sum,x,i;
    cin>>t;
    while(t--)
    {
        cin>>mt>>n>>sum;
        x=0;
        while(mt && sum)
        {
            if(sum<n)
            {
                x=x+sum*sum;
                sum=sum-sum;
                mt--;

            }
            else
            {
                x=x+n*n;
                sum=sum-n;

                mt--;
            }

        }
        cout<<x<<endl;

    }

}

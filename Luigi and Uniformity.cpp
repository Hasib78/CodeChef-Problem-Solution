#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];


        }

        sort(v.begin(),v.end());
        int flag=1;

        for(j=0; j<n-1; j++)
        {
            if(v[j]!=v[j+1])
            {
                flag=0;
                break;
            }


        }
        if(flag==1)
        {
            cout<<"0"<<endl;
        }
        else
        {

            for(j=0; j<n; j++)
            {

                if(v[j]%v[0]!=0)
                {
                    cout<<n<<endl;
                    break;

                }
                else if(v[j]!=v[0] && v[j]%v[0]==0)
                {
                    count++;
                }
            }
            if(j==n)
            {
               cout<<count<<endl;
            }


        }

    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n;
        long long i,j,sum=0,sum1=0;
        long long cum[n+10];

        for(i=0; i<n; i++)
        {
            cin>>cum[i];
            sum+=cum[i];
        }
        sort(cum,cum+n,greater<long long>());
        sum-=cum[0];
        if(sum<cum[0])
             cout<<"T"<<endl;
        else
        {
              sum-=cum[0];

            if(sum%2==0)
                cout<<"HL"<<endl;
            else
                cout<<"T"<<endl;
        }

    }

    return 0;
}



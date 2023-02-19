#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k;
        if(k>(n+1)/2)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(k>0&&i==j&&j%2==0)
                {
                    cout<<'R';
                    k--;
                }
                else
                {
                    cout<<'.';
                }
            }
            cout<<endl;

        }

    }
}


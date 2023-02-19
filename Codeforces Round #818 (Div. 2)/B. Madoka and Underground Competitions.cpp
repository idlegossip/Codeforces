#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,k,x,y;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {


        cin>>n>>k>>x>>y;
        string str[n+2];
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {
                if((i+j)%k==(x+y)%k)
                    str[i-1]+='X';
                else
                    str[i-1]+='.';
            }
        }
        //cout<<"efsd"<<endl;
        for(ll i=0; i<n; i++)
        {
            cout<<str[i]<<endl;
        }
    }

}


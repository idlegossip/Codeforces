
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,r,c;
        cin>>n>>m;
        vector<ll>v;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                ll mx=abs(i-1)+abs(j-1);
                mx=max(mx,abs(i-1)+abs(j-m));
                  mx=max(mx,abs(i-n)+abs(j-1));
                    mx=max(mx,abs(i-n)+abs(j-m));
                    v.push_back(mx);

            }
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<=(n*m-1); i++)
            cout<<v[i]<<" ";
        cout<<endl;




    }
}


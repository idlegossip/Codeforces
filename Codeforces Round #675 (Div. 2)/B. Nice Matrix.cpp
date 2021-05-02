
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        ll n,m;
        cin>>n>>m;
        ll mat[n+10][m+10];
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                cin>>mat[i][j];
            }
        }
        ll res=0;
        ll mn;
        ll nn=n;
        ll mm=m;
        n=(n+1)/2;
        m=(m+1)/2;
        ll ans=0,ans2=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                vector<ll>v;
                if(j==mm-j+1&&mm%2&& i==(nn-i+1)&&nn%2)
                    continue;
                if(j==mm-j+1&&mm%2)
                {
                    v.push_back(mat[i][j]);
                    v.push_back(mat[nn-i+1][mm-j+1]);
                }
                else if(i==(nn-i+1)&&nn%2)
                {
                    v.push_back(mat[i][j]);
                    v.push_back (mat[i][mm-j+1]);
                }
                else
                {
                    v.push_back(mat[nn-i+1][j]);
                    v.push_back(mat[i][j]);
                    v.push_back (mat[i][mm-j+1]);
                    v.push_back (mat[nn-i+1][mm-j+1]);
                }
                sort(v.begin(),v.end());
                ll a=v.size();
                for(ll k=0; k<a; k++)
                    res+=abs(v[k]-v[a/2])     ;
            }
        }
        cout<<res<<endl;

    }
    return 0;
}

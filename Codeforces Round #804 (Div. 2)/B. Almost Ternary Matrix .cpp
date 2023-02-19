
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll N = 2e5+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll ar[n+1][m+1];
        ar[0][0]=1;
        for(ll j=1; j<m; j++)
        {
            if(j%2)
            {
                ar[0][j]=ar[0][j-1]^1;
            }
            else
                ar[0][j]=ar[0][j-1];

        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(i%2)
                {
                    ar[i][j]=ar[i-1][j]^1;
                }
                else
                    ar[i][j]=ar[i-1][j];
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
               cout<<ar[i][j]<<" \n"[j==m-1];
            }
        }
    }




}
///???



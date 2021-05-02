#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    string str[n+10];
    ll adj[n+10][m+10];
    memset(adj,0,sizeof(adj));
    ll a=0,b=0;
    for(ll i=0;i<n;i++)
        cin>>str[i];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(str[i][j]=='W')
            {
               // cout<<" w "<<i<< " "<<j<<endl;
                if(i-1>=0&&str[i-1][j]=='P')
                {
                    adj[i][j]++;
                    str[i-1][j]='.' ;
                }
                if(j-1>=0&&str[i][j-1]=='P')
                {
                    adj[i][j]++;
                    str[i][j-1]='.' ;
                }
                if(i+1<n&&str[i+1][j]=='P')
                {
                    adj[i][j]++;
                    str[i+1][j]='.' ;
                }
                if(j+1<m&&str[i][j+1]=='P')
                {
                    adj[i][j]++;
                    str[i][j+1]='.' ;
                }
            }
        }
    }

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {

          a+=min(1LL,adj[i][j]);
        }
    }
    cout<<a<<endl;


}

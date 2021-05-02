#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n,m,k;
    cin>>n>>m>>k;
    string str[n+10];
    for(ll i=0; i<n; i++)
    {
        cin>>str[i];
    }
    ll res=0;
    for(ll i=0; i<n; i++)
    {
        ll cnt=0;
        for(ll j=0; j<m; j++)
        {
            if(cnt==0&&str[i][j]=='*')
                continue;
            if(cnt==0&&str[i][j]=='.')
            {
                cnt++;
                continue;
            }
            if(str[i][j]=='.'&&str[i][j]==str[i][j-1])
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                    res+=(cnt-k+1);
                cnt=0;
            }
        }
        if(cnt>=k)
        {
            res+=(cnt-k+1);
            cnt=0;
        }
    }
    if(k==1)
    {
        cout<<res<<endl;
        return 0;
    }
    for(ll j=0; j<m; j++)
    {
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(cnt==0&&str[i][j]=='*')
                continue;
            if(cnt==0&&str[i][j]=='.')
            {
                cnt++;
                continue;
            }
            if(str[i][j]=='.'&&str[i][j]==str[i-1][j])
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                    res+=(cnt-k+1);
                cnt=0;
            }
        }
        if(cnt>=k)
        {
            res+=(cnt-k+1);
            cnt=0;
        }
    }
    cout<<res<<endl;
    return 0;
}

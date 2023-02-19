#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string str;

        ll n;
        cin>>n>>str;

        ll ans=0;
        ll cnt=1;

        for(ll i=1;i<n;i++)
        {
            if(str[i-1]!=str[i])
            {
                if(cnt%2)
                {
                    ans++;
                    cnt=0;
                }
                else
                    cnt=1;
            }
            else
                cnt++;
        }
        cout<<ans<<endl;

    }

}


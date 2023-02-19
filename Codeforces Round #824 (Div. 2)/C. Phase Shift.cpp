#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string ans = "";
        vector<ll>mp(126,0),use(126,0);
        ll x ;
        for(int i = 0; i < n; i++)
        {
            x = s[i];
            // cout<<x<<'\n';
            if(mp[x])
            {
                ans += mp[x];
            }
            else
            {
                for(int j = 'a'; j <= 'z'; j++)
                {
                    int len = 0,las= 0;
                    if(use[j] == 0)
                    {
                        int j_ = j;
                        while(mp[j_])
                        {
                            j_ = mp[j_];
                            len++;
                        }
                        if(len == 25 or ( j_ != x))
                        {
                            ans += j;
                            mp[x] = j;
                            use[j] = 1;
                            break;
                        }
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
}


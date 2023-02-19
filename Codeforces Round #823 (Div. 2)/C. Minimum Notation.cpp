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
        cin>>s;
        n = s.size();
        string ans = "";
        vector<pair<ll,ll> >vp;
        map<ll,ll>mp;
        for(int i = 0; i < n; i++)
        {
            int a = s[i] - '0';
            vp.push_back({a, i});
        }
        sort(vp.begin(),vp.end());
        int p = -1;
        int l = 0, r= -1;
        while(l < n)
        {
            if( r < vp[l].second){
                r = vp[l].second;
                ans += ('0' + vp[l].first);
            }
            else{
                int a = vp[l].first + 1;
                if(a >= 10)
                    a--;
                ans += ('0' + a);
            }
            l++;
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
}



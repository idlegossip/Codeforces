
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll n,w;
    string s,s1;
    cin>>n>>s>>s1;
    vector<pair<ll,ll> >vp;

    for(int i = 0; i < 2 * n; i++)
    {
        ll a = s[i] - '0';
        ll b = s1[i] - '0';
       // cout<<"here";
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    ll cnt = 0,cnt1 = 0;
    for(int i = 0; i <  2 * n; i++)
    {
        ll a = vp[i].first;
        ll b = vp[i].second;
        if(i %2 )
        {
            if(a)
                cnt1++;
        }
        else
        {
            if(b)
                cnt++;

        }
       // cout<<"Here";
    }
    if(cnt==cnt1)
    {
        cout<<"Draw\n";
    }
    else if( cnt > cnt1)
    {
        cout<<"Second\n";
    }
    else
    {
        cout<<"First\n";
    }
}

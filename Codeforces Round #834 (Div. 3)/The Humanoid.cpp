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
        ll n,h;
        cin>>n>>h;
        ll tmp = h;
        vector<ll>v,serum;
        serum.push_back(2);
        serum.push_back(2);
        serum.push_back(3);
        ll a;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll ans1= 0;
        ll ans2 = 0,ans3 = 0;
        ll l = 0;
        for(int i = 0; i < n; i++)
        {
            while(l < 3 and tmp <= v[i])
            {
                tmp *= serum[l++];
            }
            if(tmp > v[i])
            {
                tmp  += (v[i]/2);
                ans1++;
            }
        }
        tmp = h;
        swap(serum[2],serum[1]);
        l = 0;
        for(int i = 0; i < n; i++)
        {
            while(l < 3 and tmp <= v[i])
            {
                tmp *= serum[l++];
            }
            if(tmp > v[i])
            {
                tmp  += (v[i]/2);
                ans2++;
            }
        }
        tmp = h;
        swap(serum[0],serum[1]);
        l = 0;
        for(int i = 0; i < n; i++)
        {
            while(l < 3 and tmp <= v[i])
            {
                tmp *= serum[l++];
            }
            if(tmp > v[i])
            {
                tmp  += (v[i]/2);
                ans3++;
            }
        }
        cout<<max({ans1,ans2,ans3})<<'\n';
    }
}


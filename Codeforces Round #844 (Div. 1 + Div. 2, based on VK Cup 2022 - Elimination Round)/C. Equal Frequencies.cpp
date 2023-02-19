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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<int>st,st1;
        map<int,int>mp;
        ll a;
        vector<ll>v;
        for(char i = 'a'; i <= 'z'; i++)
            st1.insert(i);
        for(int i = 0; i <  n; i++)
        {
            st.insert(s[i]);
            if(st1.find(s[i]) != st1.end())
                st1.erase(s[i]);
            mp[s[i]]++;
        }
        vector<ll>div,v1;
        vector<pair<ll,ll> >vp;
        for(auto x : st)
        {
            vp.push_back({mp[x],x});
        }
        sort(vp.rbegin(),vp.rend());
        ll mn = min(26LL,n);
        for(int i = 1; i <= mn; i++)
        {
            if(n % i==0)
            {
                div.push_back(i);
            }
        }
        mn = LONG_MAX;
        ll l = 0;
        ll div1 = 0;
        ll sz = vp.size();
        for(int i = 0; i < div.size(); i++)
        {
            ll val = div[i];
            ll cnt = n/div[i];
           //cout<<"sz = "<<val<<'\n';
            ll sm = 0,sm1 = n;
            for(int j = 0; j <min(sz,val); j++)
            {
                a = vp[j].first;
                //cout<<vp[j].second<<' '<<a<<'\n';
                if(a >= cnt){
                    sm += (a-cnt);
                    sm1 -= cnt;
                }
                else{
                    sm1 -= a;
                }

            }
            if(sm1< mn)
            {
                mn = sm1;
                div1 = val;
            }
        }
        st.clear();
       // cout<<div.size()<<'\n';
       ll in = 0;
        while(in < sz and div1 > st.size())
        {
            a = vp[in++].second;
            st.insert(a);
        }
        while(div1 > st.size())
        {
            a = *st1.begin();
            st.insert(a);
            vp.push_back({0,a});
            st1.erase(a);
        }
        l = div1 -1;
        ll cnt = n/div1;
        for(int i = 0; i < n; i++)
        {
            if(mp[s[i]] > cnt)
            {
                mp[s[i]]--;
                s[i] = ((char)(vp[l].second));
                mp[s[i]]++;
                if(mp[s[i]] >= cnt)
                    l--;
            }
            if(st.find(s[i]) == st.end()){
                s[i] = ((char)(vp[l].second));
                mp[s[i]]++;
                if(mp[s[i]] >= cnt)
                    l--;
            }
        }
        cout<<mn<<'\n';
        cout<<s<<'\n';
    }
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    ll n;
    cin>>n;
    ll a;
    vector<ll>v;

    map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]=1;
        v.push_back(a);
    }
    v.push_back(0);
    vector<ll>odd;
    vector<ll>even;
    vector<pair<ll,ll> >es;
    vector<pair<ll,ll> >os;
    vector<pair<ll,ll> >fl;
    for(ll i=1; i<=n; i++)
    {
        if(mp[i])
            continue;
        if(i%2)
            odd.push_back(i);
        else
            even.push_back(i);
    }
    ll cnt=0,f=-1;
    a=0;
    for(ll j=0; j<n; j++)
    {
        if(v[j]==0)
            cnt++;
        else
        {
            if(a==0&&cnt>0)
                fl.push_back({cnt,j}),f=j;
            else if(cnt>0)
            {
                if(v[a-1]%2==0&&v[j]%2==0)
                    es.push_back({cnt,a});
                else if(v[a-1]%2==1&&v[j]%2==1)
                    os.push_back({cnt,a});
            }
            a=j+1;
            cnt=0;
        }
    }
    if(cnt>0)
    {
        if(a)
            fl.push_back({cnt,a});
        else
            fl.push_back({cnt,n}),f=n;

    }
    sort(es.begin(),es.end());
    sort(os.begin(),os.end());
    sort(fl.begin(),fl.end());
    for(ll i=0; i<os.size(); i++)
    {
        ll ind=os[i].second;
        if(odd.size()<os[i].first)
            break;
        for(ll j=ind; j<n; j++)
        {
            if(v[j])
                break;
            ll x=odd.back();
            v[j]=x;
            odd.pop_back();
        }
    }
    for(ll i=0; i<es.size(); i++)
    {
        ll ind=es[i].second;
        if(even.size()<es[i].first)
            break;
        for(ll j=ind; j<n; j++)
        {
            if(v[j])
                break;
            ll x=even.back();
            v[j]=x,even.pop_back();
        }
    }
    for(ll i=0; i<fl.size(); i++)
    {
        ll ind=fl[i].second;
        // cout<<a<<"  a  "<<endl;
        if(ind==f)
        {
               a=v[ind];
            for(ll j=ind-1; j>=0; j--)
            {
                if(a%2==0)
                {
                    if(even.size()>=1)
                    {
                        ll x=even.back();
                        v[j]=x,even.pop_back();
                    }
                    else
                    {
                        ll x=odd.back();
                        v[j]=x,odd.pop_back();
                    }
                }
                else
                {
                    if(odd.size()>=1)
                    {
                        ll x=odd.back();
                        v[j]=x,odd.pop_back();
                    }
                    else
                    {
                        ll x=even.back();
                        v[j]=x, even.pop_back();
                    }
                }
            }
        }
        else
        {
               a=v[ind-1];
            for(ll j=ind; j<n; j++)
            {
                if(a%2==0)
                {
                    if(even.size()>=1)
                    {
                        ll x=even.back();
                        v[j]=x,even.pop_back();
                    }
                    else
                    {
                        ll x=odd.back();
                        v[j]=x,odd.pop_back();
                    }
                }
                else
                {
                    if(odd.size()>=1)
                    {
                        ll x=odd.back();
                        v[j]=x,odd.pop_back();
                    }
                    else
                    {
                        ll x=even.back();
                        v[j]=x, even.pop_back();
                    }
                }
            }
        }


    }



    for(ll i=0; i<n; i++)
    {
        if(v[i])
            continue;
        if(v[i-1]%2==0)
        {
            if(even.size()>=1)
            {
                ll x=even.back();
                v[i]=x;
                even.pop_back();
            }
            else
            {
                ll x=odd.back();
                v[i]=x;
                odd.pop_back();
            }
        }
        else
        {
            if(odd.size()>=1)
            {
                ll x=odd.back();
                v[i]=x,odd.pop_back();
            }
            else
            {
                ll x=even.back();
                v[i]=x, even.pop_back();
            }
        }
    }
    ll res=0;

    for(ll i=1; i<n; i++)
    {
        //cout<<v[i]<<" ";
        if((v[i-1]%2==0&&v[i]%2==0)||(v[i-1]%2==1&&v[i]%2==1))
            continue;
        res++;
    }
    cout<<res<<endl;
}

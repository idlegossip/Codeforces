#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll inf=1000000000007;
//ll f=0;
//ll mn;
//ll s,n;
//void knap(ll ind,ll k,ll sum,ll sum1)
//{
//    if(sum1==n)
//    {
//        f=1;
//        mn=min(k,mn);
//        return;
//
//    }
//    if(ind>=s||sum1>n)
//        return;
//    if(dp[{ind,{k,sum}}])
//        return;
//    knap(ind+1,k+1,sum+v[ind].second,sum1+v[ind].first);
//    knap(ind+1,k,sum,sum1);
//    dp[{ind,{k,sum}}]=1;
//
//
//}
int main()
{
    map<ll,ll>mp;
    ll x=1;
    ll k=1;
    while(x<inf)
    {
        x*=k;
        k++;
        v.push_back(x);
    }
    x=v.size();
    vector<ll>sum;
    for(ll i=0; i<(1<<x); i++)
    {
        ll s=0;
        ll c=0;
        for(ll j=0; j<x; j++)
        {
            if(i&(1<<j))
            {
                c++;
                s+=v[j];
            }

        }
        mp[s]=c;
        sum.push_back(s);
    }

    ll t;
    cin>>t;
    // cout<<v.size()<<endl;
    while(t--)
    {

        ll f=0,n;
        cin>>n;
        ll mn=1000;
        for(ll i=0; i<sum.size(); i++)
        {
            ll a=__builtin_popcountll(n);
            if(a==1)
            {
                //cout<<" pop "<<n<<endl;
                mn=1;
                f=1;
                break;
            }

            if(sum[i]>n)
                continue;
            ll c=mp[sum[i]];
            ll s=n-sum[i];
            for(ll j=45;j>=0;j--)
            {
                if((1LL<<j)>s)
                    continue;
                s-=(1LL<<j);
                c++;
                if(s<=0)
                    break;

            }

            if(s==0)
            {
                 mn=min(c,mn);
                   f=1;
            }


        }
        if(f)
            cout<<mn<<endl;
        else
            cout<<-1<<endl;


    }
}



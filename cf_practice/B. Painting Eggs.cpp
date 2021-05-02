#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> >vp;
    ll a,b,sum1=0,sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a>>b;
        vp.push_back({a,b});
    }
    string str="";
    for(ll i=0; i<n; i++)
    {
        if(sum+vp[i].first<=sum1+500)
        {
            str+="A";
            sum+=vp[i].first;
        }
        else
        {
            sum1+=vp[i].second,str+="G";
        }
    }
    if(abs(sum-sum1)<=500)
        cout<<str<<endl;
    else
        cout<<-1<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a;
    ll ind=-1,ind1=-1;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll j=0,dis=0,l=LONG_LONG_MAX;
    map<ll,ll>mp;
    mp[v[0]]=0;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(i>0)
         mp[v[i-1]]--;

        if(i>0&&mp[v[i-1]]==0)
           cnt--;

        while(j<n&&cnt<k)
        {
            if(mp[v[j]])
                mp[v[j]]++;
            else
            {
                mp[v[j]]=1;
                cnt++;
            }
            j++;
        }
        if(cnt==k&&l>(j-i+2))
        {
            //cout<<i+1<<" "<<j<<" "<<cnt<<endl;
            l=(j-i+2);
            ind=i+1;
            ind1=j;
        }

    }
    cout<<ind<<" "<<ind1<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll>v;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll cnt=0,res=0,mx,mn;
    for(ll i=0; i<n; i++)
    {
        mx=v[i];
        mn=v[i];
        cnt=1;
        for(ll j=i+1; j<n; j++)
        {
            if(v[i]==v[j])
                cnt++;
            else
                break;
            i=j;

        }

        res=res+((cnt*(cnt+1))/2);
    }
    cout<<res<<endl;
    return 0;
}


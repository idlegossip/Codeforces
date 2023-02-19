#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll n,x;
ll fun(ll k)
{
    ll  max_so_far = 0, max_ending_here = 0;
    ll cnt=0;

        //cout<<k<<" k "<<endl;
    for (int i=0; i<n; i++ )
    {
        if(cnt<k)
        {
            max_ending_here += v[i]+x;
            cnt++;
        }
        else
            max_ending_here += v[i];

        //cout<<max_ending_here<<" v= "<<v[i]<<" x "<<x<<endl;
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            cnt=0;
        }
    }
    return max_so_far;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


        cin>>n>>x;
        ll a;
         v.clear();
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        vector<ll>ans;
        for(ll k=0; k<=n; k++)
        {
            ans.push_back(fun(k));
            if(k!=0)
           ans[k]=max(ans[k],ans[k-1]);
        }
        for(ll i=0;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}


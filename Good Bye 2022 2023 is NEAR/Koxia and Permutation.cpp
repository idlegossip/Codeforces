
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
        ll n,k;
        cin>>n>>k;

//        ll a;
        vector<ll>v,v1,ans;
        ll l = 0, r = n;
        for(int i = 1; i <= n; i++)
        {
            if(i % k == 0)
                cout<<++l<<' ';
            else
            {
                cout<<r--<<' ';
            }
        }
        cout<<'\n';
    }
}

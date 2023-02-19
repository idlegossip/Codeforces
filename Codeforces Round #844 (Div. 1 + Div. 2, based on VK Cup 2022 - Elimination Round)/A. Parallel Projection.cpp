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
        ll w,l,h;
        cin>>w>>l>>h;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll sq = llabs(a-c) + llabs(b-d);
       //cout<<sq<<'\n';
        ll mn = min({a,b,c,d,l-b,w-a,w-c,l-d});
        //cout<<mn<<'\n';
        cout<<(2 * mn+sq+h)<<'\n';
    }
}


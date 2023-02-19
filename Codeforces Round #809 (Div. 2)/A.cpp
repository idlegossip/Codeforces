#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str="";
        ll n;
        ll m;
        cin>>n>>m;
        vector<ll>v;
        ll a;
        for(ll i=0;i<m;i++)
            str+="B";
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            ll mn = min(a-1,m-a);
            ll mx = max(a-1,m-a);
             if(str[mn]=='A')
                str[mx] = 'A';
             else
              str[mn] = 'A';




        }
        cout<<str<<endl;
    }
}

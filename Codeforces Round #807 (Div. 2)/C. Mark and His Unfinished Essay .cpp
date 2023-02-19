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
        string str,s;
        ll n ,c , q;
        cin>>n>>c>>q;
        cin>>str;
        ll l , r;
        while(c--)
        {
            cin>>l>>r;
             s =str.substr(l-1,(r-l+1));
             str+=s;
        }
        while(q--)
        {
            cin>>l;
            cout<<str[l-1]<<'\n';
        }


    }
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll a;
        ll cnt=0;
        ll res=0;
        ll f=1;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a>cnt)
            {
                cnt=a;
                res=i;
            }

            v.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            if(cnt==v[i])
            {
                if(i>0&&i+1<n&&(cnt>v[i-1]||cnt>v[i+1]))
                    res=i;
                else if(i+1>=n&&(cnt>v[i-1]))
                    res=i;
                else if(i-1<=0&&cnt>v[i+1])
                    res=i;
            }
        }

        sort(v.begin(),v.end());
        if(v[0]==v[n-1])
            cout<<-1<<endl;
        else
            cout<<res+1<<endl;

    }
    return 0;
}

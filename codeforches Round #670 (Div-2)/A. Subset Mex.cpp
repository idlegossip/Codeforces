#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,a;
        vector<ll>v;
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
            v.push_back(a);
        }
        a=0;
        ll b=0;
        for(i=0; i<=100; i++)
        {
                mp[i]--;

            if(mp[i]<0)
            {
                a=i;
                i++;
                break;
            }

        }
        for(i=0;i<=100; i++)
        {
                mp[i]--;

            if(mp[i]<0)
            {
                b=i;
                break;
            }

        }
        cout<<a+b<<endl;
    }
    return 0;
}

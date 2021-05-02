#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a,b,c;
        ll n;
        cin>>n;
        ll sum=0,sum1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a<=0)
                sum+=a;
            else
                sum1+=a;
            v.push_back(a);
        }
        if(abs(sum)==sum1)
            cout<<"NO"<<endl;
        else
        {
            if(abs(sum)<sum1)
                sort(v.begin(),v.end(),greater<ll>());
            else
                sort(v.begin(),v.end());
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++)
                cout<<v[i]<<" ";
            cout<<endl;

        }

    }
    return 0;
}

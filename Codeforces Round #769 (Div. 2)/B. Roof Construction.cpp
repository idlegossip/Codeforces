#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n;
        cin>>n;
        ll bit=0;
        ll x=n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            v.push_back(i);
        }
        x--;
        while(x)
        {
            bit++;
            x/=2;
        }
        ll b=(1<<(bit-1));
        if(n<=3)
        {
            swap(v[0],v[1]);
            for(ll i=0;i<n;i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            swap(v[0],v[b-1]);
            for(ll i=0;i<n;i++)
                cout<<v[i]<<" ";
            cout<<endl;

        }
    }
}


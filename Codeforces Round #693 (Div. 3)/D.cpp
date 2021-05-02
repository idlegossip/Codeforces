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
        vector<ll>v;

        ll res=0;
        cin>>n;
        ll a;
        for(ll i=0; i<n; i++ )
        {
            cin>>a;
            v.push_back(a);

        }
        sort(v.begin(),v.end());
        ll os=0,es=0;
        ll f=1;
        for(ll i=n-1; i>=0; i--)
        {
            if(f)
            {
                f=0;
                if(v[i]%2==0)
                    es+=v[i];
            }
            else
            {
                f=1;
                if(v[i]%2==1)
                    os+=v[i];
            }
        }
        if(os<es)
              cout<<"Alice"<<endl;
        else if(os>es)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;



    }

}


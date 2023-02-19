#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        ll sum=0,a;
        vector<ll>v;
        ll mn=LONG_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mn=min(a,mn);
        }

        if(n%2)
            cout<<"Mike"<<endl;
        else
        {
            ll mk=0,jk=0;
            for(ll i=0;i<n;i++)
            {
                if(i%2==0&&v[i]==mn)
                    mk=1;
                else if(i%2==1&&v[i]==mn)
                    jk=1;
                if(jk||mk)
                    break;
            }
            if(jk==1)
                cout<<"Mike"<<endl;
            else
                cout<<"Joe"<<endl;

        }


       // cout<<x*y<<endl;
    }
}


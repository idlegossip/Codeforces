#include<bits/stdc++.h>
using namespace std;
using ll = long long ;



//        vector<ll>v;
//        for(ll i = 0;i<n;i++){
//            cin>>a;
//            v.push_back(a);
//        }
//        sort(v.begin(),v.end());



int main()
{
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        cin>>n;
            vector<ll>v;
            for(ll i=1; i<=n; i++)
            {
                v.push_back(i);
            }
            for(ll i=1; i<n-2; i++)
            {
                if(i%2)
                swap(v[i],v[i-1]);
            }

            if(n%2)
            {
                swap(v[0],v[1]);
                for(ll i=n-3;i>=2;i--)
                {

                   v[i]=v[i-1];

                }
                v[1]=n-2;
            }

            for(ll i=0; i<n; i++)
            {
                cout<<v[i]<<' ';
            }
            cout<<'\n';





    }
}


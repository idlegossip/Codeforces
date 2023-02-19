#include<bits/stdc++.h>
using namespace std;
using ll = long long ;




//        sort(v.begin(),v.end());



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        cin>>n;
        ll pos=0;


        vector<ll>v;
        for(ll i = 0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        ll rem=v[0];
        for(ll i=1;i<n;i++)
        {
            if(rem<v[i])
            {
                rem=v[i]-rem;
                pos=i;

            }
            else
            {
              rem = rem-v[i];
            }
        }
        cout<<pos+1<<'\n';



    }
}


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
        ll n;
        cin>>n;
        ll a;
        vector<ll>v;
        ll f,mn = LONG_MAX;
        for(int i = 0; i < n; i++){
                cin>>a;
                if(!i){
                    f = a;
                }else{
                    mn = min(a,mn);
                }

        }
        if(f > mn){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
}


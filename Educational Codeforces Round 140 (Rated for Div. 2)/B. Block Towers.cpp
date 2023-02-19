

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
        vector<ll>v;
        ll a;
        ll f = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            if(!i){
                f = a;
            }
            else if(a > f)
             v.push_back(a);
        }
        sort(v.begin(),v.end());
        n = v.size();
        for(int i = 0; i < n; i++){
            a = v[i];
            if(a > f){
                a = a - f;
                a = (a+1)/2;
                f += a;
            }
        }
        cout<<f<<'\n';

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n ;


        vector<ll>v;
        ll a;
        for(int i = 0 ; i < 3; i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<"\n";
    }
}


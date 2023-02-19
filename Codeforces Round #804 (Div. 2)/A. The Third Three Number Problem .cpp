
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const ll N = 2e5+7;

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
        if(n%2)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll a = n/2;
            cout<<0<<" "<<a<<" "<<a<<endl;
        }
    }




}
///???


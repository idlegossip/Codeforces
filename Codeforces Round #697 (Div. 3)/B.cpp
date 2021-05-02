#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair
int main()
{
    ll t;
    cin>>t;
    ll f;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=n/2020;
        f=0;
       //  cout<<a<<endl;
        if(n%2020>a)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}


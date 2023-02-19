#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<2<<endl;
            continue;
        }
        ll a=n/3;
        if(a*3==n)
        {
            cout<<a<<"\n";
        }
        else
        {
            cout<<a+1<<endl;
        }
    }
}

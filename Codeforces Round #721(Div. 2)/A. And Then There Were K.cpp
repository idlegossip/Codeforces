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
        ll mx=0;
        cin>>n;
        while(n)
        {
           n/=2;
           mx++;
        }
        cout<<(1<< (mx-1))-1<<endl;
    }
}

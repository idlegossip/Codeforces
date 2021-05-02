
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        ll mn=0;
        mn=max(abs(a-1)+abs(b-1),mn);
        mn=max(abs(a-n)+abs(b-m),mn);
        mn=max(a-1+abs(b-m),mn);
        mn=max(abs(a-n)+b-1,mn);
        cout<<mn<<endl;
    }
    return 0;
}


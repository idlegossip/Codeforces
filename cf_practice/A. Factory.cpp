#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll f=1;
    for(ll i=0;i<100000;i++)
    {
        n+=(n%m);
        if(n%m==0)
        {
            f=0;
            break;
        }

    }
    if(!f)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

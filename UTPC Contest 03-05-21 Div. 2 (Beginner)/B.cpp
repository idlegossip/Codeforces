#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    ll cnt=0;
    cin>>n>>m;
    while(n>0&&m>0)
    {
        cnt++;
        n=n/2;
        m--;

    }
    cout<<cnt<<endl;
}

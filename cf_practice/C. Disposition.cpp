#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll i,j,k;
    vector<ll>v;
    cin>>n;
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(i=2; i<=n; i++)
        cout<<i<<" ";
    cout<<1<<endl;
    return  0;

}

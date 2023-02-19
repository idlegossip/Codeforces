#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mat[100005];
map<ll,ll>mp;
string str;
ll x;
ll mx=-1e10;
void fun(ll n)
{
    if(n<0)
        return;
    fun(n-1);
    mx=max(mx,mat[n]);
    cout<<mx;
    if(n!=x)
    cout<<" ";




}
int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
        ll n;
        vector<ll>v;
        ll a;
        ll mn=1e9;


        cin>>n;
    for(ll i=0;i<n;i++)
    {
            cin>>mat[i];

    }

        x=n;
       fun(n-1);
        cout<<endl;
        //        cout<<c<<" ";
//    }
//    cout<<endl;
  //  }


}

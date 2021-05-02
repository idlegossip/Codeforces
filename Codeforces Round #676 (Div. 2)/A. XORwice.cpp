#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            vector<ll>v;
            ll a,b,c;
            ll n,k;
            cin>>n>>k;
            cout<<min((n^k),(k^n))<<endl;
      }
      return 0;
}


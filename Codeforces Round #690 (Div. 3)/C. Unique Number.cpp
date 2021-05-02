
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        if(n>45)
        {
              cout<<-1<<endl;
              continue;
        }
        ll j=9;
      vector<ll>v;
        while(n)
        {
              if(n>=j)
              {
                    v.push_back(j);
                    n-=j;
              }
              j--;

        }
        for(ll i=v.size()-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;




    }
    return 0;
}


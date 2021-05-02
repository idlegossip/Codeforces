#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
map<pair<ll,ll>,ll>mp;
  string str,str1;
ll recur(ll ind,ll ind2,ll mx)
{
      if(ind2==m)
            return mx;
      if(ind==n)
            return 0;
      if(mp[{ind,ind2}]!=0)
            return mp[{ind,ind2}];
      if(str[ind]==str1[ind2])
      {

         recur(ind,ind2,)
      }
}
int main()
{
        ll p,a,b,c;

        cin>>n>>m;
        cin>>str>>str1;
        ll ar[n+10];
        ll mx=0;
        ll j=n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            mx=max(a,mx);
            ar[i]=mx;
        }

        for(ll i=n-1; i>=0; i--)
        {
            if(v[i]==ar[i])
            {
                reverse(v.begin()+i,v.begin()+j);
                j=i;
            }
        }
        reverse(v.begin(),v.end());
        for(ll i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }
    return 0;
}




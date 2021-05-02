#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mat[200010][10];
ll n,m;
ll ind1,ind2;
ll check(ll x)
{

    set<ll>st;
    vector<ll>v(1005);
    vector<ll>val(n+10);

    for(ll i=0; i<n; i++)
    {
        int mask=0;
        for(ll j=0; j<m; j++)
        {
            if(mat[i][j]>= x )
            {
                mask|=(1<<j);
            }
        }
        v[mask]=i;
        st.insert(mask);
    }
    set<ll>::iterator it;
    set<ll>::iterator it1;
    for(it=st.begin(); it!=st.end(); it++)
    {
        for(it1=st.begin(); it1!=st.end(); it1++)
        {


            if((*it|*it1)==((1<<m)-1))
            {
                    //cout<<x<<" "<<(*it|*it1)<<" "<<(1<<m)-1<<endl;
                ind1=v[*it];
                ind2=v[*it1];
                return 1;
            }

        }

    }
    return 0;

}
int main()
{
    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }
    ll l=0,r=1e9+10;
    while(l<=r)
    {
          ll mid=(l+r)/2;
          if(check(mid))
          {
                l=mid+1;
          }
          else
            r=mid-1;

    }
      cout<<ind1+1<<" "<<ind2+1<<endl;


}

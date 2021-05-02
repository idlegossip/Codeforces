#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
ll d,n;
vector<ll>v;
void re(ll x)
{
    if(x>1000)
        return;
    if(mp[x])
        return;
    re(x+d);
    mp[x+d]=1;
    re(x+10);
    mp[x+10]=1;
    return;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


        cin>>n>>d;
        mp.clear();
        re(d);
        mp[d]=1;
        ll a ;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            ll f=0;
            ll b=a;
            while(b)
            {
                  if(b%10==d)
                        f=1;
                  b/=10;
            }

                if(mp[a]==1||f||a%d==0||a>=((d+1)*10))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
        }


    }
}

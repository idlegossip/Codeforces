#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct num
{
    ll v,ind;
    num(ll a,ll b)
    {
        v=a;
        ind=b;
    }
};
bool operator<(num ob,num ob1)
{
  return ob.v<ob1.v;
}

int main()
{
    ll n;
    cin>>n;
    vector<num>v;
    ll a;
    ll f=0;
    ll cnt=0;
    map<ll,ll>mp;
    vector<ll>vv;
    for(ll i=1; i<=n; i++)
    {
        cin>>a;
        mp[a]++;
        v.push_back(num(a,i));
        if(mp[a]>2)
            f=1,vv.push_back(i);
        if(mp[a]==2)
            cnt++,vv.push_back(i);
    }
    sort(v.begin(),v.end());
    if(cnt<2&&f==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(ll i=0; i<n; i++)
            cout<<v[i].ind<<" ";
        cout<<endl;
        f=0;
        for(ll i=0; i<n; i++)
        {

            if(i!=n-1&&f==0&&vv[0]==v[i+1].ind)
            {

                f=1;
                cout<<v[i+1].ind<<" ";
                cout<<v[i].ind<<" ";
               i++;
            }
            else
                cout<<v[i].ind<<" ";
        }
        cout<<endl;
        f=0;
        for(ll i=0; i<n; i++)
        {

            if(i!=n-1&&f==0&&vv[1]==v[i+1].ind)
            {
                f=1;
                cout<<v[i+1].ind<<" ";
                cout<<v[i].ind<<" ";
               i++;
            }
            else
                cout<<v[i].ind<<" ";
        }
        cout<<endl;
    }
    return 0;
}

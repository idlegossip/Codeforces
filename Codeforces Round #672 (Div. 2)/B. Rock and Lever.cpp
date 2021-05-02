#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(ll n)
{
    ll cnt=0;
    while(n)
    {
        n/=2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<ll>v(n+10);
        ll v1[n+10];
        for(i=0; i<n; i++)
        {
            cin>>v[i];
            v1[i]=func(v[i]);
          //  cout<<"   "<<v1[i]<<endl;
        }
        ll res=0;
        ll cnt=1;
        sort(v1,v1+n);
        for(i=1; i<n; i++)
        {
            if(v1[i]!=v1[i-1])
            {
                res+=(cnt*(cnt-1))/2;
                cnt=1;
            }
            else
                cnt++;
                //cout<<cnt<<" "<<v1[i]<<" "<<endl;
        }
        res+=(cnt*(cnt-1))/2;
        cout<<res<<endl;
    }

    return 0;

}

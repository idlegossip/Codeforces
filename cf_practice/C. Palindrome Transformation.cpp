#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll p,n;
    cin>>n>>p;
    string str;
    cin>>str;
    ll mid=n/2;
    ll res=0;
    ll ind = 1e9;

    ll ind1=-1;
    ll x;
    ll a,b;
    ll aa='a';
    ll z='z';
    if(mid<p)
    {
        reverse(str.begin(),str.end());
        p=n-p+1;
    }
    for(ll i=0; i<mid; i++)
    {
        if(str[i]!=str[n-1-i])
        {
            ind=min(ind,i);
            ind1=max(ind1,i);
            a=str[i];
            b=str[n-i-1];
            ll dis=abs(b-a);
            ll dis1;
            if(a<b)
                dis1=(a-aa)+(z-b)+1;
            else
                dis1=(b-aa)+(z-a)+1;
            str[i]=str[n-i-1];
            res+=min(dis,dis1);
        }
    }
    if(ind1==-1)
    {
        cout<<0<<endl;
        return 0;
    }
    a=n-ind-1;
    x=min(abs(p-ind-1),abs(p-a-1));
    x=min(x,abs(p-ind1-1));
    a=n-ind1-1;
    x=min(x,abs(p-a-1));
    cout<<res+x+(ind1-ind)<<endl;
}

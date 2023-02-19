#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,a;
        cin>>l>>r>>a;
        if(r<a||a==1)
        {
            cout<<(r)<<endl;
            continue;
        }
        ll c=0;
        c=r/a;
        c*=a;
        if(c>l)
            c--;
        else
            c=0;
        if(r%a==0&&l!=r)
            r--;
        ll x=(r/a)+(r%a);


        x=max((c/a)+(c%a),x);
        if(a>l&&a<=r)
        {

            a--;
            x=max(a,x);
        }
        cout<<x<<endl;


    }
}


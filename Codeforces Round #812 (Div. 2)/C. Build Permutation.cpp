#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        n--;
        ll sq = sqrt(n);
        if(sq*sq!=n) sq++;
        ll st=n;
        vector<ll>v;
        //cout<<sq*sq<<" ";
        while(n)
        {
            ll b=sq*sq;

            if(abs(n-b)>st)
            {
                sq--;
                //cout<<n<<" x ";
                sq = sqrt(n);
                st=n;
                if(sq*sq!=n)
                    sq++;
            }
            b=sq*sq;
            //cout<<b<<" "<<n<<endl;
            ll a = abs(b-n);
            n--;
            v.push_back(a);
        }
        ll a=v.back();
        if(a==st)
            v.push_back(0);
        else
            v.push_back(st);
        reverse(v.begin(),v.end());
        for(ll x : v)
        {
            cout<<x<<" ";

        }
        cout<<"\n";
    }
}

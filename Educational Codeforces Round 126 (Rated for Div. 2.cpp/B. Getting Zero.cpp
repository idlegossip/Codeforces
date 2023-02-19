#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=32768;
vector<ll>v,v1;
int main()
{
    ll n,a,b,c;
    cin>>n;

    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(ll i=0; i<n; i++)
    {
        a=v[i];
         ll k=0;
        if(a%2)
        {
            a++;
            k=1;
        }
        if(a==mod)
            b=0;
        else
            b=mod-(a%mod);

        while(k<40)
        {
            k++;
            a=2*a;
            if(a!=mod)
                c=k+((mod-(a%mod)))/k;
            else
                c=k;
            b=min(b,c);
            a%=mod;
            //cout<<a<<" "<<b<<endl;
        }
        cout<<b<<" ";

    }

}



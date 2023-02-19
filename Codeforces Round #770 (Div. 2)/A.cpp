#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n,k;
        ll f=1;
        cin>>n>>k>>str;
        if(k==0)
        {
            cout<<1<<endl;
            continue;
        }
        for(ll i=0; i<(n+1)/2; i++)
        {
            if(str[i]!=str[n-i-1])
            {
                f=0;
                break;
            }

        }
        if(f)
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
}


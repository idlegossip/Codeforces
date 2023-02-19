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
        ll a;
        string str;
        cin>>str;
        n=str.size();
        ll f=0;
        for(ll i=n-1; i>=0; i--)
        {
            if(str[i]=='B')
                f++;
            else if(f)f--;
        }
        if(f>0||n==1||str[n-1]=='A'||str[0]=='B')
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}


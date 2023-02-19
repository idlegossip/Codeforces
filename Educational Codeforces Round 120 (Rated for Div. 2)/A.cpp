
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k;
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b&&c%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if (b==c&&a%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a==c&&b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(labs(a-b)==c||labs(b-c)==a||labs(c-a)==b)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}

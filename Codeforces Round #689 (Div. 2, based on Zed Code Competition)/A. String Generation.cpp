#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str="";
        for(ll i=0; i<k; i++)
            str+='a';
            n-=k;
        for(ll i=1; i<=n; i++)
        {
            char ch=('a'+(i%3));
            str+=ch;

        }
        cout<<str<<endl;;

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    ll m;
    cin>>str;
    ll n=str.size();
    ll a,b,l,r,k;
    cin>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>l>>r>>k;
        a=r-l+1;
        k=k%a;
        l--;
        r--;
        string s="";
        for(ll j=r-k+1; j<=r; j++)
            s+=str[j];
        for(ll j=r-k; j>=l; j--)
        {

            str[j+k]=str[j];
        }
        for(ll i=0; i<k; i++)
            str[l++]=s[i];
    }
    cout<<str<<endl;
}

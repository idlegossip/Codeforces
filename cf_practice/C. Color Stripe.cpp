#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    if(k==2)
    {
        string sB="";
        string sA="";
        for(ll i=0; i<n; i++)
        {
            if(i%2)
                sA+="A";
            else
                sA+="B";
        }
        for(ll i=0; i<n; i++)
        {
            if(i%2==0)
                sB+="A";
            else
                sB+="B";
        }
        ll a=0,b=0;
        for(ll i=0; i<n; i++)
        {
            if(sA[i]!=str[i])
                a++;
            if(sB[i]!=str[i])
                b++;
        }
        if(a<b)
        {
            cout<<a<<endl;
            cout<<sA<<endl;
        }
        else
        {
            cout<<b<<endl;
            cout<<sB<<endl;
        }
        return 0;
    }
    ll cnt=0;
    string s="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(ll i=1; i<n; i++)
    {
        ll a=str[i];
        ll b=str[i-1];
        if(a==b)
        {
            cnt++;
            for(ll j=1; j<=k; j++)
            {
                if(str[i]!=s[j])
                {
                    if(i+1>=n)
                    {
                        str[i]=s[j];
                        break;
                    }
                    else if(i+1<n&&str[i+1]!=s[j])
                    {
                        str[i]=s[j];
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    cout<<str<<endl;

}

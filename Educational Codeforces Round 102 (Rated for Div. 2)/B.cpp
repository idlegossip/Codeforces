#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
ll LCM(ll a,ll b)
{
    return a*b/GCD(a,b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        // cin>>n;
        string str1,str2;
        ll f=0;
        vector<ll>v;
        ll a;
        cin>>str1>>str2;
        ll l=str1.size();
        n=str2.size();
        string s="";
        for(ll k=0; k<n; k++)
        {
            s+=str2[k];
           // cout<<s<<"  ";

            ll flag=1;
            for(ll i=0; i<l; i++)
            {
                if(str1[i]==s[0])
                {
                    ll j=0;
                    while(j<=k&&str1[i+j]==s[j])
                        j++;
                    i=i+k;
                    if(j<=k)
                        flag=0;
                }
                else
                    flag=0;
                if(flag==0)
                    break;
            }
            for(ll i=0; i<n; i++)
            {
                if(str2[i]==s[0])
                {
                    ll j=0;
                    while(j<=k&&str2[i+j]==s[j])
                        j++;
                    i=i+k;
                    if(j<=k)
                        flag=0;
                }
                else
                    flag=0;
                if(flag==0)
                    break;
            }
            if(flag)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
            continue;
        }
        a=LCM(l,n);
        n=s.size();
        a=a/n;
        for(ll i=0; i<a; i++)
            cout<<s;
        cout<<endl;

    }
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        ll ind=0;
        ll n;
        vector<ll>v;
        cin>>a>>b;
        string str;
        cin>>str;
        n=str.size();
        ll f=0;
        ll aa=0,bb=0;
         for(ll i=0; i<n; i++)
         {
             if(str[i]=='0')
                aa++;
             else if(str[i]=='1')
                bb++;
         }

        for(ll i=0; i<n/2; i++)
        {
            if((str[i]=='1'||str[i]=='0')&&str[n-i-1]=='?')
            {
                if(str[i]=='1')
                {

                    if(bb<b)
                       bb++;
                    else
                        f=1;
                    str[n-i-1]='1';

                }
                else
                {

                    if(aa<a)
                         aa++;
                    else
                        f=1;
                    str[n-i-1]='0';
                }
            }
            else  if(str[i]=='?'&&(str[n-1-i]=='0'||str[n-i-1]=='1'))
            {
                if(str[n-i-1]=='1')
                {
                    if(bb<b)
                        bb++;
                    else
                        f=1;
                     str[i]='1';
                }
                else
                {
                    if(aa<a)
                        aa++;
                    else
                        f=1;
                    str[i]='0';
                }
            }
        }

        if(f)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=0; i<n/2; i++)
        {
            if(str[i]=='?')
            {
                if(aa<a-1)
                {
                    str[i]='0';
                    str[n-i-1]='0';
                    aa+=2;
                }
                else if(bb<b-1)
                {
                    bb+=2;
                    str[i]='1';
                    str[n-i-1]='1';
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n%2==1&&str[(n/2)]=='?')
        {
            if(aa<a)
                str[(n/2)]='0',aa++;
            else if(bb<b)
                str[(n/2)]='1',bb++;
            else
                f=1;
        }
         for(ll i=0; i<n/2; i++)
            if(str[i]!=str[n-i-1])
            f=1;
        if(f||aa>a||bb>b)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<str<<endl;
    }
}

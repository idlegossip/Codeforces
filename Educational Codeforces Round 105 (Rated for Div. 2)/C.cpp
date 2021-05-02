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
        ll n;
        cin>>str;
        n=str.size();
        set<char>st;
        ll a=0,b=0,c=0;
        ll f=0;
        a=0;
        for(ll i=0; i<n; i++)
        {
            st.insert(str[i]);
        }
        if(st.size()==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(st.size()==2)
        {
            a=0;
            b=LONG_LONG_MAX;
            char ch=str[0];
            for(ll i=0; i<n; i++)
            {
                if(str[i]==ch)
                    a++;
                else
                    a--;
                b=min(b,a);
            }
            if(b==0&&a==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='A'||str[i]=='C')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='A')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='C'||str[i]=='B')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='B')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='C'||str[i]=='B')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        a=0;
        b=LONG_LONG_MAX;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='C')
                a++;
            else
                a--;
            b=min(b,a);
        }
        if(a==0&&b==0)
            f=1;
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

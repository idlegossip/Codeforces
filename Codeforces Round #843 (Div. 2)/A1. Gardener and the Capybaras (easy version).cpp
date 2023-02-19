#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>s;
        n = s.size();
        vector<ll>v;
        ll f = -1;
        if(n==3)
        {
            cout<<s[0]<<' '<<s[1]<<' '<<s[2]<<'\n';
            continue;
        }
        if(s[0]==s[1])
        {
            cout<<s[0] <<' '<<s[1]<<' ';
            for(int i = 2; i < n; i++)
            {
                cout<<s[i];
            }
            cout<<'\n';
            continue;
        }
        if(s[n-1]==s[n-2])
        {

            for(int i = 0; i < n-2; i++)
            {
                cout<<s[i];
            }
            cout<<' '<<s[n-2] <<' '<<s[n-1];
            cout<<'\n';
            continue;
        }
        if(s[0]==s[n-1])
        {
            cout<<s[0] <<' ';
            for(int i = 1; i < n-1; i++)
            {
                cout<<s[i];
            }
            cout<<' '<<s[n-1] <<'\n';
            continue;
        }
        f = -1;
        for(int i = 2; i < n; i++)
        {
            if(s[0]==s[i])
            {
                f = i;
            }
        }
        if(f==-1)
        {
            cout<<":(\n";
        }
        else
        {
            cout<<s[0]<<' ';
            for(int i = 1; i < f; i++)
            {
                cout<<s[i];
            }
            cout<<' ';
            for(int i = f; i < n; i++)
            {
                cout<<s[i];
            }
             cout<<'\n';
        }

    }
}


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
        cin>>str;

        ll n=str.size();
        if(n%2)
        {
            cout<<"No"<<endl;
            continue;
        }
        ll mn=LONG_LONG_MAX;
        ll mx=LONG_LONG_MIN;
        ll cnt=0,w=0;
        ll mni=0;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            if(str[i]==')')
                cnt--;
            else if(str[i]=='(')
                cnt++;
            if(cnt<0)
            {
                for(ll j=i-1; j>=0; j--)
                {
                    if(str[j]=='?')
                    {
                        str[j]='(';
                        cnt++;
                        break;
                    }
                }
            }
            mn=min(mn,cnt);
            if(mn<0)
                break;
        }
        if(mn==0&&cnt==0)
            cout<<"Yes"<<endl;
        else
        {
            ll f=0;

            if(cnt>0&&mn>=0)
            {
                cnt=0;
                ll mn=LONG_LONG_MAX;
                for(ll i=n-1; i>=0; i--)
                {
                    if(str[i]==')')
                        cnt--;
                    else if(str[i]=='(')
                        cnt++;
                    if(cnt>0)
                    {
                        for(ll j=i+1; j<n; j++)
                        {
                            if(str[j]=='?')
                            {
                                str[j]='(';
                                cnt--;
                                break;
                            }
                        }
                    }
                    mn=min(mn,cnt);
                    if(cnt>0)
                        break;
                }
            }
            if(mn==0&&cnt==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }
}

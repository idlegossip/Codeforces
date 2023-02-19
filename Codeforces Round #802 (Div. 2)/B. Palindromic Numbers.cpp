
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll z='0';
    // ll z1=z;
    while(t--)
    {
        ll n;
        ll m;
        vector<ll>v;
        ll a;
        cin>>n;
        string s;
        cin>>s;
        string st="";
        ll x=n;

        if(s[0]=='9')
        {
            ll car=0;
            a=s[x-1]-'0';
            if(a>1)
            {
                char ch=(char)(z+11-a-car);
                car=1;
                st+=ch;
            }
            else if(a==0)
                st+='1';
            else if(a==1)
                st+='0';
            for(ll i=x-2; i>=0; i--)
            {
                if(s[i]=='0')
                {
                    char ch=(char)(z+2-car);
                    st+=ch;
                    car=0;

                }
                else if(s[i]=='1')
                {
                    char ch=(char)(z+1-car);
                    st+=ch;
                    car=0;
                }
                else if(s[i]=='2'&&car==0)
                {
                    st+='0';
                    car=0;
                }
                else
                {
                    ll a=s[i]-'0';
                    // cout<<a<<endl;
                    char ch=(char)(z+12-a-car);
                    car=1;
                    st+=ch;

                }
            }
        }
        else
        {
            for(ll i=x-1; i>=0; i--)
            {
                ll a=s[i]-'0';
                char ch= (char)(z+9-a);
                //cout<<ch<<endl;
                st+=ch;

            }
        }
        reverse(st.begin(),st.end());
        cout<<st<<endl;
    }
}

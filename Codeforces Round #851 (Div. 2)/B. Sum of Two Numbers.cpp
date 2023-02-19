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
        ll a;
        ll b;
        ll sum = 0,sum1 = 0;
        ll f= 0;
        ll d;
        for(int i = 0; i < n; i++)
        {
            d = s[i]-'0';
            a = d/2;
            b = d-a;
            if(d%2==0)
            {
                sum *= 10LL;
                sum1 *= 10LL;
                sum += a;
                sum1 += a;
            }
            else
            {

                if(f)
                {
                    sum *= 10LL;
                    sum1 *= 10LL;
                    sum += a;
                    sum1 += b;
                    f = 0;
                }
                else{
                        sum *= 10LL;
                    sum1 *= 10LL;
                    sum1 += a;
                    sum += b;
                    f = 1;
                }

            }
        }
        cout<<sum1<<' '<<sum<<'\n';
    }
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
char str[1000010];
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {

        ll i,j,k;
        ll mod=1e9+7;
        ll n;
        scanf("%lld",&n);

        scanf("%s",str);
        ll l=strlen(str);
        vector<char>v(str,str+l);
        ll a;
        for(i=1; i<=n; i++)
        {
            ll j=v[i-1]-'1';
            k=j;
            if(v.size()<n)
            {

                vector<char>str2(v.begin()+i,v.end());
                while(j>0)
                {
                    v.insert(v.end(),str2.begin(),str2.end());
                    j--;
                }
            }
            l=l+(k*(l-i))%mod;
        }
        printf("%lld\n",l%mod);
    }
    return 0;
}


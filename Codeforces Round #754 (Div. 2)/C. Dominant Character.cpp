
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a=0,b=0,c=0;
        string str;
        ll n;
        cin>>n;
        cin>>str;
        ll ans=-1;
        for(ll i=1; i<=10; i++)
        {
            for(ll k=0; k+i<n; k++)
            {
                a=0;
                b=0;
                c=0;
                for(ll j=0; j<=i; j++)
                {
                    if(str[k+j]=='a')
                        a++;
                    else if(str[k+j]=='b')
                        b++;
                    else
                        c++;
                }
                if(a>c&&a>b)
                {

                   ans=i+1;
                   break;
                }
            }
            if(ans!=-1)
                break;

        }

            cout<<ans<<endl;


    }
}


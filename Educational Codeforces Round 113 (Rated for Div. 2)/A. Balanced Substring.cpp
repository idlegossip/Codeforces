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
        cin>>n>>str;
        map<ll,ll>a,b;
        ll f=0;
        for(ll i=1;i<n;i++)
        {
            if(str[i]!=str[i-1])
            {
                cout<<i<<" "<<i+1<<endl;
                f=1;
                break;
            }
        }
        if(!f)
            cout<<-1<<" "<<-1<<endl;



    }
}

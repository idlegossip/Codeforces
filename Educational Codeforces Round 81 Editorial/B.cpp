#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        string str;
        cin>>str;
        ll cnt_0=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='1')
                cnt_0--;
            else
                cnt_0++;
        }
        ll bal=0;
        ll f=0;
        ll res=0;
        for(ll i=0; i<n; i++)
        {
            if(cnt_0==0)
            {
                if(x==bal)
                    f=1;
            }
            else if(llabs(x-bal)%llabs(cnt_0)==0)
            {
                if((x-bal)/(cnt_0)>=0)
                    res++;
            }


            if(str[i]=='1')
                bal--;
            else
                bal++;
        }
        if(f)
            cout<<-1<<endl;
        else
            cout<<res<<endl;

    }
}

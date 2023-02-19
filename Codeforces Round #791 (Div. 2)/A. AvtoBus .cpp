#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%12==0)
        {
            cout<<(n/6)<<" "<<(n/4)<<endl;
        }
        else
        {
            ll mn=0;
            ll mx=0;
            if(n%4==0)
                mx=n/4;
            else if((n-6)%4==0)
            {
                mx=(n-6)/4;
                mx++;
            }
            if(n%6==0)
                mn=n/4;
            else if((n-4)%6==0)
            {
                mn=(n-4)/6;
                mn++;
            }
            else if((n-8)%6==0)
            {
                mn=(n-8)/6;
                mn+=2;
            }
            if(mn==0&&mx==0)
                cout<<-1<<endl;
            else
            {
                if(mx==0)
                    mx=mn;
                else if(mn==0)
                    mn=mx;
                cout<<min(mn,mx)<<" "<<max(mn,mx)<<endl;
            }
        }
    }
}

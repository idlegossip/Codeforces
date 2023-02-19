#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if((n==1&&m>2)||(n>2&&m==1))
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==1||m==1)
        {
            cout<<abs(n-m)<<endl;
            continue;
        }
         ll a=max(n,m);
        if(n%2==m%2)
        {
          a--;
          cout<<a*2<<endl;
        }
        else
            cout<<((a-2)*2)+1<<endl;

    }
}


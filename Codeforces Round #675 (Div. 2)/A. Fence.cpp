#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c;
        ll mn=max(a,max(b,c));
        if(mn!=1)
            cout<<mn-1<<endl;
        else if(mn+1!=a&&mn+1!=b&&mn+1!=c)
            cout<<mn+1<<endl;
        else if(mn+2!=a&&mn+2!=b&&mn+2!=c)
            cout<<mn+2<<endl;
        else if(mn+3!=a&&mn+3!=b&&mn+3!=c)
            cout<<mn+3<<endl;
    }
    return 0;
}

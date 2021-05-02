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
        cin>>n;
        cin>>str;

        ll i,j,k;
        ll f=0;
        for(i=0; i<n; i++)
        {
            if(i%2==0&&(str[i]-'0')%2==1)
                f=1;
        }
        if(n%2)
        {
            if(f)
                cout<<1<<endl;
            else
                cout<<2<<endl;
            continue;
        }
        f=0 ;
        for(i=0; i<n; i++)
        {
            if(i%2==1&&(str[i]-'0')%2==0)
                f=1;
        }
        if(f)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;

}


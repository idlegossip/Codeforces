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
        ll mx=0;
        cin>>n;
        string str;
        cin>>str;
        ll a=0,b=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='0')
                a++;

        }
        for(ll i=0; i<(n+1)/2; i++)
        {
            if(str[i]!=str[n-i-1])
                b++;

        }
        if(b==0)
        {
            if(a%2==0||a==1)
                cout<<"BOB"<<endl;
            else if(a%2)
                cout<<"ALICE"<<endl;
            else
                cout<<"DRAW"<<endl;
            continue;
        }

        ll alice=0;
        if(a==2&&b==1)
            cout<<"DRAW"<<endl;
        else
            cout<<"ALICE"<<endl;


    }
}



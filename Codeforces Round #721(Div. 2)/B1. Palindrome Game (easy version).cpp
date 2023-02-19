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
        ll a=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='0')
                a++;

        }


        if(a%2==0||a==1)
            cout<<"BOB"<<endl;
        else if(a%2)
            cout<<"ALICE"<<endl;
        else
            cout<<"DRAW"<<endl;

    }
}


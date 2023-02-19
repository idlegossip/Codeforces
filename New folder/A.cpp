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
        char c;
        cin>>str>>c;
        ll n=str.size();
        ll f=0;
        if(n%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(i%2==0&&str[i]==c)
                f=1;
        }
         if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
            cout<<"YES"<<endl;



    }
}

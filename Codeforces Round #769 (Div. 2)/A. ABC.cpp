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
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else if(n==2&&str[0]!=str[1])
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

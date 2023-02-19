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
        string str;
        cin>>str;
        n  = str.size();
        if((str[0]=='Y'||str[0]=='y') and (str[1]=='e'||str[1]=='E') and (str[2]=='s'||str[2]=='S'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

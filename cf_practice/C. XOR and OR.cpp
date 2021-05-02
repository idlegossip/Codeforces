#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string st,st1;
    ll l,l1;
    cin>>st>>st1;
    l=st.size();
    l1=st1.size();
    if(l!=l1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ll f=0,f1=0;
    for(ll i=0;i<l;i++)
    {
        if(st[i]=='1')
            f=1;
        if(st1[i]=='1')
            f1=1;
    }
    if(f==f1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

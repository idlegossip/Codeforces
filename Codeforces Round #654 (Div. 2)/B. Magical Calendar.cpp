#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,n;
        cin>>n>>r;
        if(n<=1)
        {
            cout<<"1"<<endl;
            continue;
        }
        ll res=0;
        if(n<=r)
        {
            r=n-1;
            res=1;

        }
        cout<<res+((r+1)*(r))/2<<endl;

    }
}


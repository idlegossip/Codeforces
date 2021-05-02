#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b,c;
        cin>>b>>c>>n>>m;
        if(c+b<n+m)
            cout<<"NO"<<endl;
        else
        {
            if(b>c)
            {
                ll d=(b-c);
                //cout<<n-d<<endl;
                d=b-d;
                if(d<m)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
            else
            {
                if(b>=m)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }




        }
    }
    return 0;
}


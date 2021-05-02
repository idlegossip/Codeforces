#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

       ll a,b,c,n,m,sum=0;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            sum+=a  ;

        }
        if(sum!=m)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}

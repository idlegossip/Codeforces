#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v,v1;
ll mat[110000];


ll m,n;
ll x,a=0,b=1;
ll pal(ll i)
{
    if(i==1)
        return 1;
    if(i%2)
        x=3*i+1;
    else
        x=i/2;
    return 1+pal(x);
}


int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        cin>>n;
        for(ll i=0; i<101000; i++)
            mat[i]=0;

        ll sum=1,sum1=0;
        map<ll,ll>mp;
//        for(ll i=0; i<n; i++)
//            for(ll j=0; j<m; j++)cin>>mat[i][j];
//        for(ll i=0; i<n; i++)
//            for(ll j=0; j<m; j++)cin>>mat1[i][j];


        cout<<pal(n)<<endl;





    }


}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y,d;
        ll f=1;
        cin>>n>>m>>x>>y>>d;
        int r=1,c=1;
        for(int col= 1 ; col<=m;col++)
        {
            int z= abs(x-1)+abs(y-col);
            //cout<<x<<' ';
            if(d>=z)
                f=0;
        }

        for(int row= 1 ; row<=n; row++)
        {
            int z = abs(x-row)+abs(y-m);
            //cout<<x<<' ';
            if(d>=z)
                f=0;
        }
        if(f)
        {
            cout<<(n+m)-2<<'\n';
            continue;
        }
        f=1;

        for(int row= 1 ; row<=n; row++)
        {
            int z = abs(x-row)+abs(y-1);
            if(d>=z)
                f=0;
        }
        for(int col= 1 ; col<=m;col++)
        {
            int z = abs(x-n)+abs(y-col);
            if(d>=z)
                f=0;
        }
        if(f)
        {
            cout<<(n+m)-2<<'\n';
        }
        else
            cout<<-1<<'\n';



    }
}


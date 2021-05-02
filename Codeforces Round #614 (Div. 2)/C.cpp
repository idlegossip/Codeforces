#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[3][100010];
int main()
{
    ll n,t;
    cin>>n>>t;
    ll block=0;
    ll _x=0;
    while(t--)
    {

        ll x,y;
        cin>>x>>y;
        ll f=1;
        if(ar[x][y]==0)
            _x=1,ar[x][y]=1;
        else
            _x=-1,ar[x][y]=0;

        for(ll i=-1;i<=1;i++)
        {
              if(y+i<1||y+i>n)
                  continue;
              if(ar[3-x][y+i]==1)
                  block+=_x;
        }
        if(block==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll l,r,u,d;
        cin>>n>>u>>r>>d>>l;
        ll res=1;
        if(u==n)
        {
            if(r==0 || l==0)res=0;
            if(d==n&&(l<2||r<2))res=0;
            if(d==n-1&&(l+r<3))res=0;
        }
        if(u==n-1)
        {
             if(r+l==0)res=0;
            if(d==n&&(l+r<3))res=0;
            if(d==n-1&&(l+r<2))res=0;
        }
        if(d==n)
        {
            if(r==0 || l==0)res=0;
            if(u==n&&(l<2||r<2))res=0;
            if(u==n-1&&(l+r<3))res=0;
        }
        if(d==n-1)
        {
             if(r==0 && l==0)res=0;
            if(u==n&&(l+r<3))res=0;
            if(u==n-1&&(l+r<2))res=0;
        }
        if(l==n)
        {
            if(u==0 || d==0)res=0;
            if(r==n&&(u<2||d<2))res=0;
            if(r==n-1&&(u+d<3))res=0;
        }
        if(l==n-1)
        {
             if(u==0 && d==0)res=0;
            if(r==n&&(u+d<3))res=0;
            if(r==n-1&&(u+d<2))res=0;
        }
        if(r==n)
        {
            if(u==0 or d==0)res=0;
            if(l==n&&(u<2||d<2))res=0;
            if(l==n-1&&(u+d<3))res=0;
        }
        if(r==n-1)
        {
             if(u==0 && d==0)res=0;
            if(l==n&&(u+d<3))res=0;
            if(l==n-1&&(u+d<2))res=0;
        }
        if(res)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

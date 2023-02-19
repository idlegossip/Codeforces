
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        ll res=0;
        ll dr=1,dc=1;
        while(1)
        {
           // cout<<rb<< " "<<cb<<endl;
            if(rb==rd||cb==cd)
                break;
            res++;
            if(rb==n||rb==1)
                dr=-1;
            if(cb==m||cb==1)
                dc=-dc;
                 if(rb==1)
                dr=1;
                if(cb==1)
                dc=1;
            rb+=dr;
            cb+=dc;

        }
        cout<<res<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a==b)
        {
            cout<<0<<'\n';
            continue;
        }
        if(llabs(a-b)>= x)
        {
            cout<<1<<'\n';
            continue;
        }
        if(a < b)
        {
            if(llabs(l-a)>= x)
            {
                cout<<2<<'\n';
                continue;
            }
            if(llabs(r - a)<x)
            {
                cout<<-1<<'\n';
                continue;
            }
            a = r;
            if(llabs(a-b)>= x)
            {
                cout<<2<<'\n';
                continue;
            }
            a = l;
            if(llabs(a-b)>= x)
            {
                cout<<3<<'\n';
                continue;
            }
            cout<<-1<<'\n';
            continue;
        }
        else
        {
            if(llabs(r-a)>= x)
            {
                cout<<2<<'\n';
                continue;
            }
            if(llabs(l - a)<x)
            {
                cout<<-1<<'\n';
                continue;
            }
            a = l;
            if(llabs(a-b)>= x)
            {
                cout<<2<<'\n';
                continue;
            }
            a = r;
            if(llabs(a-b)>= x)
            {
                cout<<3<<'\n';
                continue;
            }
            cout<<-1<<'\n';
            continue;

        }

//        vector<ll>v;
//        ll a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}


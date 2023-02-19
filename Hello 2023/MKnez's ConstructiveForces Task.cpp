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
        ll n;
        cin>>n;
        if(n == 1 or n==3)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            if(n%2)
            {
                ll n1 = n;
                n -= 2;
                ll a= n/2;
                ll b = n - a;
                for(int i = 0; i < n1; i++)
                {
                    if(i%2)
                    {
                        cout<<-b<<' ';
                    }
                    else
                    {
                        cout<<a<<' ';
                    }
                }
                cout<<'\n';
                continue;

            }
            for(int i = 0; i < n; i++)
            {
                if(i%2)
                {
                    cout<<1<<' ';
                }
                else
                {
                    cout<<-1<<' ';
                }
            }
            cout<<'\n';
        }

//        vector<ll>v;
//        ll a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}


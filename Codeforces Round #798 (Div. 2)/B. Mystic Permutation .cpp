#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n;
        vector<ll>v;
        priority_queue<ll>q;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            q.push(-(i+1));
        }
        if(n==1)
        {
            cout<<-1<<endl;

            continue;
        }
        ll ans[n+1];
        for(ll i=0;i<n;i++)
        {
            a=llabs(q.top());
            q.pop();
            ll b= llabs(q.top());
            q.pop();
            if(a==v[i])
            {
               ans[i]=b;
               q.push(-a);

            }
            else
            {
               ans[i]=a;
               q.push(-b);
            }
            if(q.size()==1)
                break;
        }
        a=llabs(q.top());

        if(v[n-1]!=a)
        {
            ans[n-1]=a;
        }
        else
        {
           ans[n-1]=ans[n-2];
           ans[n-2]=a;
        }
        for(ll i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }
}


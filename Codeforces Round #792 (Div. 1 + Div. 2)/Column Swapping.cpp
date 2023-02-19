#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        ll x,y,z;
        cin>>n>>m;
        vector<ll>v[n];
        ll ar[n+1][m+1];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a;
                v[i].push_back(a);
                ar[i][j]=a;
            }
        }
        set<ll>st;
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            sort(v[i].begin(),v[i].end());
            for(ll j=0; j<m; j++)
            {
                if(v[i][j]!=ar[i][j])
                    st.insert(j);
            }
            if(st.size())
                break;
        }
        if(st.size()>3)
            cout<<-1<<endl;
        else
        {
            //cout<<" s "<<st.size()<<endl;
            vector<ll>v;
            for(auto x1 : st)
                v.push_back(x1);
            ll f=1;
            ll cl1=0,cl2=0;
            if(st.size())
                cl1=v[0],cl2=v[1];


            for(ll i1=0; i1<n; i1++)
                swap(ar[i1][cl1],ar[i1][cl2]);


            for(ll i1=0; i1<n; i1++)
            {
                for(ll j1=1; j1<m; j1++)
                {
                    if(ar[i1][j1]<ar[i1][j1-1])
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(f)
                cout<<cl1+1<<" "<<cl2+1<<endl;
            else
                cout<<-1<<endl;
        }
    }
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v,v1;
        ll n,a;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }

        multiset<ll>s;
        ll f=0;
        ll i=n-1,j=n-1;
        while(i>=0&&j>=0)
        {
            if(j>0&&v1[j]==v1[j-1])
            {
                s.insert(v1[j-1]);
                j--;
            }
            else if(v[i]==v1[j])
            {
                i--;
                j--;
            }
            else if(s.size()>0&&s.find(v[i])!=s.end())
            {
                s.erase(s.find(v[i]));
                i--;
            }
            else
            {
                f=1;
                break;

            }

        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

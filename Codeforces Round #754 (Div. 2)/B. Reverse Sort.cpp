#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,a1,a3;
        string str;
        ll n;
        cin>>n;
        cin>>str;
        vector<ll>ans;
        ll l=0,r=n-1;
        while(l<r)
        {
            if(str[r]=='0')
            {
                while(str[l]=='0')
                {
                    l++;

                }
                if(l<r)
                {
                     ans.push_back(l+1);
                      ans.push_back(r+1);
                      l++;
                }
            }
            r--;
        }
        if(ans.size())
        {
            cout<<1<<endl;
            cout<<ans.size()<<" ";
            sort(ans.begin(),ans.end());
            for(ll i=0;i<ans.size();i++)
                cout<<ans[i]<<" ";
            cout<<endl;

        }
        else
            cout<<0<<endl;

    }
}


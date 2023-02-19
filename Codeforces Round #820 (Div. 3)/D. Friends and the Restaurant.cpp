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
        int n;

        cin>>n;
        ll a;
        vector<ll>v,v1,v2;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(v[i]-a);
        }
        sort(v1.begin(),v1.end());
        ll sum=0;
        ll cnt=0;
       ll l=0,r=n-1;
        while(l<r){
            while(r>l and v1[l]+v1[r]>0)
                r--;
          if(l<r)
           cnt++;
           l++;
           r--;
        }
        cout<<cnt<<'\n';

    }

}





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
        ll n ;
        cin>>n;
        vector<ll>v,v1;
        ll a;
        int mp[3];
        mp[1] = 0,mp[0] =  0;
        int one = -1,z = -1;
        ll ans = 0;
        for(int i = 0 ; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
            if(a ==0 and z < 0)
            {
                z = i;
            }
            if(a==1)
            {
                one = i;
            }
        }
        int mp1[3];
        mp1[0] = mp[0];
        for(int i =0; i < n; i++)
        {
            if(v[i]==0)
            {
                mp1[0]--;
            }
            else
            {
                ans += mp1[0];
            }
        }
        ll mx = ans;
        if(z > -1)
        {
           // cout<<z<<" z "<<endl;
            ans = 0;
            v1 = v;
            v1[z] = 1;
            mp1[0] = mp[0]-1;
            for(int i =0; i < n; i++)
            {
                if(v1[i]==0)
                {
                    mp1[0]--;
                }
                else
                {
                    ans += mp1[0];
                }
            }
            mx = max(mx,ans);
            //cout<<"z "<<mx<<' '<<ans<<'\n';
        }
        if(one > -1)
        {
            ans = 0;
            v1 = v;
            v1[one] = 0;
            mp1[0] = mp[0] + 1;
            mp1[1] = mp[1];
            for(int i =0; i < n; i++)
            {
                if(v1[i]==0)
                {
                    mp1[0]--;
                }
                else
                {
                    ans += mp1[0];
                }
            }
            mx = max(mx,ans);
            //cout<<"one " <<mx<<' '<<ans<<endl;
        }
       // cout<<z<<' '<<one<<'\n';
        cout<<mx<<'\n';
    }
}


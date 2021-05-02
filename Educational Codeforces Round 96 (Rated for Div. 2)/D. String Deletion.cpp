#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n;
        cin>>n;
        vector<ll>v;
        cin>>str;
        ll cnt=1,i;
        char ch=str[0];
        ll k=0;
        ll j=n-1;
        vector<pair<ll,ll> >res;
        for(i=1; i<n; i++)
        {
            if(ch!=str[i])
            {
                if(cnt!=1)
                    res.push_back({cnt,k});
                k++;
                ch=str[i];
                v.push_back(cnt);
                cnt=1;
            }
            else
                cnt++;
        }
        if(cnt!=1)
            res.push_back({cnt,k});
        v.push_back(cnt);
        n=v.size();
        k=0;
        ll nn=res.size();
        cnt=0;
        for(i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                cnt++;
                if(k<nn)
                {
                    ll a=res[k].first;
                    ll ind=res[k].second;
                    v[ind]--;
                    if(v[ind]<=1)
                        k++;

                }
                else
                    n--;
            }
            else
            {
                cnt++;
                k++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}




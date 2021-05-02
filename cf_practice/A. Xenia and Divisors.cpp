#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll a;
    vector<ll>v,va,vb,vc;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }
    ll c=1;
    ll f=0;
    while(c<8)
    {
        while(c<=7&&!mp[c])
            c++;
        if(c>=8)
            break;

        mp[c]--;
       //cout<<c<<" "<<mp[c]<<endl;
        f=1;
        for(ll i=c+c; i<=7; i+=c)
        {
            if(mp[i])
            {
                //cout<<i<<" "<<mp[i]<<endl;
                for(ll j=i+i; j<=7; j+=i)
                {
                    if(mp[j])
                    {
                        //cout<<j<<" "<<mp[j]<<endl;
                        va.push_back(c);
                        vb.push_back(i);
                        vc.push_back(j);
                        f=0;
                        mp[i]--;
                        mp[j]--;
                        break;
                    }
                }
            }
            if(!f)
                break;
        }
        if(f)
            break;
    }
    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());
    sort(vc.begin(),vc.end());
    if(f)
    {
        cout<<-1<<endl;

    }
    else
    {
        for(ll i=0; i<n/3; i++)
        {
            cout<<va[i]<<" "<<vb[i]<<" "<<vc[i]<<endl;
        }
    }
}


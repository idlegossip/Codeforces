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
        string str1;
        ll i,j,k;
        ll n;
        cin>>n;
        cin>>str>>str1;
        vector<ll>v;
        ll cnt[30];
        memset(cnt,0,sizeof(cnt));
        for(i=0; i<n; i++)
        {
            ll a=str[i]-'a';
            ll b=str1[i]-'a';
            cnt[a]++;
            cnt[b]++;
        }
        ll f=0;
        for(i=0; i<26; i++)
        {
            if(cnt[i]%2==1)
            {
                f=1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(f)
            continue;
        vector<pair<ll,ll> >vp;
        for(i=0; i<n; i++)
        {
            if(str[i]==str1[i])
                continue;
            ll f=0;
            for(j=i+1; j<n; j++)
            {
                if(str[i]==str[j])
                {
                    f=1;
                    vp.push_back({j,i});
                    swap(str[j],str1[i]);
                    break;
                }
            }

            if(f)
                continue;
            for(j=i+1; j<n; j++)
            {
                if(str[i]==str1[j])
                {
                    vp.push_back({i+1,j});
                    swap(str[i+1],str1[j]);
                    vp.push_back({i+1,i});
                    swap(str[i+1],str1[i]);
                    break;
                }
            }
        }
        cout<<"YES"<<endl ;
        cout<<vp.size()<<endl;
        for(i=0; i<vp.size(); i++)
            cout<<vp[i].first+1<<" "<<vp[i].second+1<<endl;

    }
    return 0;
}


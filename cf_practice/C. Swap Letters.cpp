#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string str,str1;
    cin>>str>>str1;

    vector<ll>fa,fb,sa,sb;
    vector<pair<ll,ll> >res;
    for(ll i=0;i<n;i++)
    {
        if(str[i]==str1[i])
            continue;
        if(str[i]=='a')
        {
          fa.push_back(i);
          sb.push_back(i);
        }
        else
        {
           fb.push_back(i);
          sa.push_back(i);
        }
    }
    if((fa.size()+fb.size())%2)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(fa.begin(),fa.end());
    sort(fb.begin(),fb.end());
    sort(sa.begin(),sa.end());
    sort(sb.begin(),sb.end());
    if(fa.size()%2)
    {
        ll l=fa.size();
        ll ind=fa[l-1];
        res.push_back({ind,ind});
        fa.pop_back();
        sb.pop_back();
        fb.push_back(ind);
        sa.push_back(ind);
    }
      ll l=sb.size()-1;
    for(ll i=0;i<(fa.size())/2;i++)
    {
       ll ind=fa[i];
       ll a=sb[l--];
       res.push_back({ind,a});
    }
    l=sa.size()-1;
    for(ll i=0;i<(fb.size())/2;i++)
    {
       ll ind=fb[i];
       ll a=sa[l--];
       res.push_back({ind,a});
    }
    cout<<res.size()<<endl;
    for(ll i=0;i<(res.size());i++)
    {
       ll ind=res[i].first;
       ll a=res[i].second;
       cout<<ind+1<<" "<<a+1<<endl;
    }



}

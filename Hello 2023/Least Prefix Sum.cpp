#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll sum = 0;

        vector<ll>v,pre(n+1,0);
        ll a;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
//            pre[i] = a;
//            if(i)
//                pre[i] += pre[i-1];
            v.push_back(a);
        }
        //priority_queue<pair<ll,ll> >pq;
        priority_queue<ll>pq1;
        multiset<pair<ll,ll> >st;
        ll l = m - 1;
        for(int i = 0; i < m; i++)
        {
            if(v[i] > 0)
                st.insert({v[i],-i});
            sum += v[i];
        }
        ll ans = 0;
        ll psm = 0;
        // cout<<st.size()<<'\n';
        for(int i = 0; i < m; i++)
        {
            psm += v[i];
            if(v[i] > 0)
                st.erase(st.find({v[i],-i}));
            if(psm < sum)
            {
                while(1)
                {

                    ll dif =llabs(sum - psm);
                   // cout<<dif<<"here\n";
                    pair<ll,ll> p = {dif,-i};
                    auto  it = st.upper_bound(p);
                    if(it !=st.end())
                    {
                       // cout<<"here\n";
                    }
                    else it--;
                    p = *it;
                    ll val = p.first;
                    ll ind = -p.second;
                    //cout<<val<<' '<<ind<<'\n';
                    sum -= (2*val);
                    v[ind] = - v[ind];
                    ans++;
                    if(st.size() > 0)
                        st.erase(st.find(p));
                    else
                        break;
                    if(psm >= sum)
                        break;
                }
            }
        }
       // cout<<"here\n";
//        while(!pq.empty())
//        {
//            ll val = pq.top().first;
//            pq.pop();
//            pq2.push(val);
//        }
        for(int i = m; i < n; i++)
        {
            if(v[i] < 0)
                pq1.push(-v[i]);
            psm += v[i];
            if(psm < sum)
            {
                while(!pq1.empty())
                {
                    ll val =(pq1.top());
                    psm += (2 * val);
                    pq1.pop();
                    ans++;
                    if(psm >= sum)
                        break;
                }
            }
//            if(psm < sum)
//            {
//                while(!pq2.empty())
//                {
//
//                    ll val = pq2.top();
//                    pq2.pop();
//                    sum -= (2*val);
//                    psm -= (2 * val);
//                    ans++;
//                    if(psm >= sum)
//                        break;
//                }
//            }
        }
        cout<<ans<<'\n';

    }
}


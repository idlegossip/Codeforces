#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 4e5+7;
int tre[N];
vector<int>v(N);
void build(int node,int l,int r)
{
    if(l==r)
    {
        tre[node] = v[l] ;
        return;
    }
    int mid = (l+r)>>1;
    build(2*node,l,mid);
    build(2*node + 1,mid+1,r);
    tre[node] = max(tre[2* node + 1],tre[2* node]);
}
int query(int node,int l,int r,int i,int j)
{
    if(l > j or r < i)
        return -1;
    if(l >= i and r <= j)
        return tre[node];
    int mid = (l+r)>>1;
    int x = query(2*node,l,mid,i,j);
    int y = query(2*node + 1,mid+1,r,i,j);
    return max(x,y);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a;
    int mx1 = 0,mn1 = 1e9+7;
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx1 = max(v[i],mx1);
        mn1 = min(v[i],mn1);
        v[n+i] = v[2*n + i] = v[i];
    }
    if(mx1 <= 2 * mn1 )
    {
        for(int i = 0; i < n; i++)
            cout<<-1<<' ';
        cout<<'\n';
        return 0 ;
    }
    int f = 0;
    vector<int>ans;
    int ls = 0;
    int l = 0, r = 0;
    int mx = 0;
    map<int,int>mp;
    set<int>st;
    while(l < n)
    {
        if(st.size())
            mx = *(--st.end());
        else
            mx = 0;
        //cout<<mx<<'\n';
        while(r < 3 * n and mx <= 2 * v[r])
        {
            mp[v[r]]++;
            mx = max(v[r],mx);
            st.insert(v[r]);
            r++;
        }
        ans.push_back(r-l);
        mp[v[l]]--;
        if(mp[v[l]] == 0)
        {
            st.erase(v[l]);
        }
        l++;
        if(l > r){
            r++;
        }

    }
    for(int i = 0; i < n; i++)
    {
        cout<<ans[i]<<' ';
    }
}

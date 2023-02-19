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
        int n,k;
        cin>>n>>k;
        vector<ll>v;
        int a;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll sum = 0;
        map<int,int>mp;
        for(int j = 0; j < k; j++ )
        {
            int ind = j;
            int mx = -1;

            for(int i = (j % k); i < n; i+=k)
            {
                if( !mp[i] and mx < v[i]){
                        ind = i;
                        mx = v[i];
                }
            }
            mp[ind] = 1;
            sum+=mx;
        }

        cout<<sum<<'\n';
    }
}

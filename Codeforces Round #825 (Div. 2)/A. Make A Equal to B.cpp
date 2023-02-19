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
        vector<int>v,v1;
        int a;

        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int f = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            if(a != v[i])
            {
                f++;
            }
            v1.push_back(a);
        }
        int ans = 0;
        if(f <= 1)
        {
            cout<<f<<'\n';
            continue;
        }
        ans = 1;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
       // cout<<f<<'\n';
        for(int i = 0; i < n; i++)
        {
            a = v1[i];
            if(a != v[i])
            {
                ans++;
            }
        }
        cout<<min(f,ans)<<'\n';
    }
}

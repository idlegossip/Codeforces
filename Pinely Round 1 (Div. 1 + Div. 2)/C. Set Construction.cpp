#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n;
        string str[n+5];
        vector<int>v[n+1];
        for(int i = 0; i<n; i++)
        {
            cin>>str[i];
        }
        int f = 1;
        for(int i = 0; i < n; i++)
        {
            vector<int>tmp;
            for(int j = 0; j < n; j++)
            {
                if(str[i][j]=='1')
                {
                    tmp.push_back(j+1);
                }
            }
            for(auto ind : tmp)
            {
               // cout<<ind<<' '<<i+1<<'\n';
                v[ind].push_back(i+1);
            }
            v[i+1].push_back(i+1);
        }
        for(int i =1; i <= n; i++)
        {
            cout<<v[i].size()<<' ';
            for(auto x : v[i])
            {
                cout<<x<<' ';
            }
            cout<<'\n';
        }
    }
}


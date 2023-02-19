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
        string str;
        cin>>str;
        vector<ll>g[200];


        n = str.size();

        int jum ;
        int cost = 0;
        vector<ll>ans;

        int last=2;
        int a = str[0];
        int b = str[n-1];
        int mn = min(a,b);
        int mx = max(a,b);
        for(ll i=1; i<n-1; i++)
        {
            int x = str[i];
            g[x].push_back(i+1);
        }

        ans.push_back(1);
        ll an=0;
        ll ls=1;
        if(a<b)
        {
            for(int len = mn ; len <= mx; len++)
            {
                for(int i=0;i<g[len].size();i++)
                {
                    int x = g[len][i];
                    ans.push_back(x);
                    //an+=llabs(str[x-1]-str[ls-1]);
                    //ls=x;
                    last++;
                }
            }
        }
        else
        {

            for(int len = mx ; len >= mn; len--)
            {
               for(int i=0;i<g[len].size();i++)
                {
                    int x = g[len][i];
                    ans.push_back(x);
                    //an+=llabs(str[x-1]-str[ls-1]);
                    //ls=x;
                    last++;
                }
            }
        }

        //an+=llabs(str[n-1]-str[ls-1]);
        //cout<<an<<'\n';
        ans.push_back(n);

        cout<<mx-mn<<' '<<last<<'\n';
        for(int i =0; i <last; i++)
        {
            cout<<ans[i]<<' ';
        }

        for(int i = mn; i<=mx; i++)
            g[i].clear();
        cout<<'\n';

    }

}




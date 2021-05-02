#include <bits/stdc++.h>
using namespace std;
const int Alp = 20;
vector<vector<int> >adj(Alp);
bool Mark[Alp];
void  dfs(int u)
{
    Mark[u] = true;
    for(int i=0; i<adj[u].size(); i++)
    {

        int v=adj[u][i];
       // cout<<u<<" "<<v<<endl;
        if (!Mark[v])
            dfs(v);
    }
};
int main()
{
    //ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int test;
    cin >> test;
    while (test--)
    {

        int n;
        string a, b;
        cin>> n ;
        cin>>a >>b;
        bool bad = false;
        for (int i = 0; i <Alp; ++i)
            adj[i].clear();
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    bad = true;
                    cout << "-1\n";
                    break;
                }

                adj[a[i]-'a'].push_back(b[i]-'a');
                adj[b[i]-'a'].push_back(a[i]-'a');
            }
        }
        memset(Mark,0,sizeof(Mark));
        if (bad) continue;
        int ans = Alp;
        for (int i = 0; i <Alp; ++i)
        {

            if (Mark[i]==0)
            {
                //cout<<i<<" ";
                --ans;
                dfs(i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

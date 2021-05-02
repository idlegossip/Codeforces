#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int> > adj;  // adjacency list representation
int n; // number of nodes
int s=10; // source vertex

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);


int main()
{
      cin>>s;
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (!used[u])
            {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
}

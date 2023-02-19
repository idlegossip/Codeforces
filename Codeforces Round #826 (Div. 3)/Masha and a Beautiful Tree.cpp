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
        int a;
        vector<int>v;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        int f = 1;
        int x = n;
        int ans = 0;

        vector<int>v1;

        int dis = 1;
        int f1 = 1;
        while(1)
        {
            int f = 1;
            x = v.size();
            if(x == 1)
            {
                break;
            }

            for(int i = 0; i < x; i += 2)
            {
                if(v[i] > v[i+1])
                {
                    ans++;
                    swap(v[i],v[i+1]);
                }
                if(v[i+1] - v[i] > dis)
                {
                    f1 = 0;
                    break;
                }
                v1.push_back(v[i+1]);
            }
            dis *= 2;
            if(!f1)
            {
                break;
            }
            v.clear();
            v = v1;
            v1.clear();
        }
        if(!f1)
        {
            cout<<-1<<'\n';
        }
        else
        {
            cout<<ans<<'\n';
        }
    }
}


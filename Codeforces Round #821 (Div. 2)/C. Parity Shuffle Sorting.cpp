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
        vector<pair<int,int> >ev,od,ans;
        int a,b;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            if(a%2)
                od.push_back({i+1,a});
            else
                ev.push_back({i+1,a});
        }
        int siz = od.size();
        int siz1 = ev.size();
        if(siz >= 1  and siz1 >= 1)
        {
            a = ev[0].first;
            b = od[0].first;
            if(a > b)
            {
                for(int i = siz-2; i >= 0; i--)
                {
                    int pos1 = od[siz - 1].first;
                    int pos = od[i].first;
                    ans.push_back({pos,pos1});
                }
                for(int i = 0; i < siz1; i++)
                {
                    int x = ev[i].first;
                    ans.push_back({b,x});
                }
            }
            else
            {
                for(int i = siz1-2; i >= 0; i--)
                {
                    int pos1 = ev[siz1 - 1].first;
                    int pos = ev[i].first;
                    ans.push_back({pos,pos1});
                }
                // cout<<a<<'a'<<b<<'\n';
                for(int i = 0; i < siz; i++)
                {
                    int x = od[i].first;
                    ans.push_back({a,x});
                }
            }
        }
        else if(siz >= 1)
        {
            for(int i = siz-2; i >= 0; i--)
            {
                int pos1 = od[siz - 1].first;
                int pos = od[i].first;
                ans.push_back({pos,pos1});
            }

        }
        else
        {
            for(int i = siz1-2; i >= 0; i--)
            {
                int pos1 = ev[siz1 - 1].first;
                int pos = ev[i].first;
                ans.push_back({pos,pos1});
            }
        }
        cout<<ans.size()<<'\n';
        siz = ans.size();
        for(int i = 0; i < siz; i++)
        {
            cout<<ans[i].first<<' '<<ans[i].second<<'\n';
        }
    }
}



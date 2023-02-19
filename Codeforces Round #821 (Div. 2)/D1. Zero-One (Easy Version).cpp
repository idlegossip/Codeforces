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
        int n,x,y;
        cin>>n>>x>>y;
        string s,s1;
        cin>>s>>s1;
        vector<ll>v,vy;
        int cnt = 0;
        int a;
        ll sum1 = 0,sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != s1[i])
            {
                v.push_back(i);
                cnt++;
            }
        }
        if(cnt % 2 )
        {
            cout<<-1<<'\n';
            continue;
        }
        else
        {
            if(n == 2 and cnt == 2)
            {
                cout<<x<<'\n';
            }
            else
            {
                int f = 0;
                int nxt = 0;
                n = v.size();
                for(int i = 1; i < n; i+=2)
                {
                    if(v[i] - v[i-1] > 1){
                        if((v[i] - v[i-1])*x < y){
                            sum1 += 1LL * (v[i] - v[i-1]) * x;
                        }
                        else{
                            sum1 += y;
                        }
                    }
                    else{
                            f = 1;
                        if(2 * y < x){
                            sum1 += 2 * y;
                        }
                        else
                            sum1 += x;
                    }

                }
                if(f and cnt == 2)
                {
                    sum2 = 2*y;
                }
                else
                {
                    sum2 =1LL * (cnt/2) * y;
                }
                cout<<min(sum1, sum2)<<'\n';
            }

        }

    }
}



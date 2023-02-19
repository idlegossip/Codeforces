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
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        int ans = n;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += v[i];
            int mx = i + 1;
            ll sum1 = 0;
            int f = 1;
            ll ls = i;
            for(int j = i + 1; j < n; j++){
                sum1 += v[j];
                if( sum1 > sum){
                    f = 0;
                    break;
                }
                else if(sum == sum1){
                    sum1 = 0;
                    a = j - ls;
                    mx = max(a, mx);
                    ls = j;
                }

            }
            if(f and sum1 == 0){
                ans = min(ans,mx);
            }
        }
        cout<<ans<<'\n';
    }
}


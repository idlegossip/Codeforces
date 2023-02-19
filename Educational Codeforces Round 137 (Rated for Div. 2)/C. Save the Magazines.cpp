///?? To begin with the name of almighty ALLAH.
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
        string s;
        cin>>s;

        int a;
        vector<ll>v;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        ll ans = 0;
        int r = n-1;
        while( r >= 0){
                if(s[r] == '1'){
                    ll sum = 0;
                    ll l = r;
                    ll mn = v[r];
                    while(l >= 0 and s[l] != '0'){
                        sum+= v[l];
                        mn = min(v[l],mn);
                        l--;
                    }
                     //cout<<l<<' '<<sum<<' '<<mn<<'\n';

                    if(l >= 0){
                        sum = max(sum-mn+v[l],sum);
                    }

                    ans += sum;
                     r = l - 1;
                }
                else
                    r--;

        }
        cout<<ans<<'\n';


    }
}


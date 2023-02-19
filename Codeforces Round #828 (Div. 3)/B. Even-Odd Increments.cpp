///??To begin with the Name of Almighty ALLAH.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll a;
        ll sum = 0;
        vector<int>v;
        int cnt = 0, cnt1= 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            sum += a;
            if(a%2){
                cnt1++;
            }
            else
                cnt++;
            v.push_back(a);
        }
        int f;
        while(q--){
            cin>>f>>a;
            if(f){
                if(a % 2){
                    cnt += cnt1;
                    sum += (cnt1 * a);
                    cnt1 = 0;
                }
                else{
                    sum += (cnt1 * a);
                }
            }
            else{
                if(a % 2){
                    cnt1 += cnt;
                    sum += (cnt * a);
                    cnt = 0;
                }
                else{
                    sum += (cnt * a);
                }
            }
            cout<<sum<<'\n';
        }

    }
}


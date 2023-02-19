
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt = 0;
        if(s[0]=='1')
            cnt++;
        for(int i = 1; i < n; i++){
                if(s[i]=='1'){
                        if(cnt %2 )cout<<"-";
                else cout<<"+";
                         cnt++;

                }
                else{
                    cout<<"+";
                }


        }

        cout<<'\n';
//        vector<ll>v;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }

}

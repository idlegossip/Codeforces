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
        ll x = 0, y = 0;
        ll cnt = 0;
        ll mx = 0, my = 0;
        for(int i = 0; i < n; i++){
            if(i > 0 and s[i] != s[i-1]){
               if(s[i] == '1') {
                mx = max(mx,cnt);
                cnt=1;
               }
               else{
                  my = max(my,cnt);
                  cnt=1;
               }
            }
            else{
                cnt++;
            }
            if(s[i]=='1')
                x++;
            else
                y++;
        }
        if(s[n-1] == '1') {
                mx = max(mx,cnt);
                cnt=1;
               }
               else{
                  my = max(my,cnt);
                  cnt=1;
               }
        cout<<max({mx*mx,x*y,my*my})<<'\n';
    }
}


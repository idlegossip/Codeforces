
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b;
        ll ind;
        vector<ll>v(3,0);
        v[0] = 1;
        v[1] = 2;
        for(int i = 3; i <= n; i++)
        {
            cout<<"? "<<i<<" "<<v[0]<<"\n";
            fflush(stdout);
            cin>>a;
            cout<<"? "<<i<<" "<<v[1]<<"\n";
            fflush(stdout);
            cin>>b;
            if(a==b){
                continue;
            }
            else if(a < b){
                v[0] = i;
            }
            else{
                v[1] = i;
            }
        }
        cout<<"! "<<v[0] <<' '<<v[1]<<"\n";
        fflush(stdout);

    }

}

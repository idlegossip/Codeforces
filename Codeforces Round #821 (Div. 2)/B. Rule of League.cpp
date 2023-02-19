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
        if(x > y){
            swap(x,y);
        }
        if((x > 0 and y >0) or (x==0 and y == 0) ){
            cout<<-1<<'\n';
            continue;
        }

        vector<ll>v(n+1);
        int w = 1;
        int cnt = 0;
        for(int i = 2; i <= n; i++){
            if(cnt == 0){
                w = i;
            }
            v[i] = w;
            cnt++;
            if(cnt == y){
                cnt = 0;
            }

        }
        if(cnt){
            cout<<-1;
        }
        else
        {
            for(int i = 2; i <= n; i++){
                cout<<v[i]<<' ';
            }
        }
        cout<<'\n';
    }
}



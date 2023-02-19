#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n ;
    cin>>n;
    vector<int>use(n+1),lb(n+1);
    queue<int>q;
    ll ans = 0;
    int a;
    for(int i = 0; i < n; i++){
        cin>>a;
        q.push(a);
    }
    for(int i = 0; i < n; i++){
        cin>>lb[i];
    }
    for(int i = 0; i < n; i++){
       if(q.front() == lb[i]){
        q.pop();
       }
       else{
        ans++;
        use[lb[i]] = 1;
       }
       while(!q.empty() and use[q.front()]){
        q.pop();
       }
    }
    cout<<ans<<'\n';

}


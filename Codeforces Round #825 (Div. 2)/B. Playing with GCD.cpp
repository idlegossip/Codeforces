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
        vector<int>v,v1;
        int a;
        for(int i = 0; i < n; i++){
           cin>>a;
           v.push_back(a);
        }
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
          v1.push_back(v[0]);
         for(int i = 1; i < n; i++){
             if(v[i-1] != v[i])
           v1.push_back(v[i-1]*v[i]/__gcd(v[i],v[i-1]));
         else
          v1.push_back(v[i]);

        }
          v1.push_back(v[n-1]);


        int f =1;
        n = v1.size();
        for(int i = 1; i < n; i++){
                int x = __gcd(v1[i-1],v1[i]);
                if(x != v[i-1]){
                    f = 0;
                }
        }
        if(f){
             cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}

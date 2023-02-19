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
        vector<int>v,las(n+1,0);
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        las[0] = 1;
        for(int i = 0; i < n; i++)
        {
            if((i >= v[i] and las[i - v[i]]== 1)){
                las[i+1] = 1;
            }
            if(las[i]==1 and i+v[i]+1 <= n){
                las[i+v[i]+1] = 1;
            }
        }
        if(las[n])
        {
            cout<<"YES"<<'\n';
        }
        else
        {
           cout<<"NO"<<'\n';
        }
    }
}

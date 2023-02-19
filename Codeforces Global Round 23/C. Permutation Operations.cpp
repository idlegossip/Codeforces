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
        vector<int>v,ans;
        vector<pair<int,int> >v1;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }

        for(int i = n - 1; i >=1; i--){
                if(v[i]< v[i - 1]){
                   v1.push_back({v[i-1]-v[i],i});
                }
        }
        sort(v1.begin(),v1.end());
        int x = v1.size();
        for(int i = 0; i < (n-x); i++){
            cout<<"1 ";
        }

        for(int i = 0; i < x; i++){
            cout<<v1[i].second+1<<' ';
        }

        cout<<'\n';


    }
}


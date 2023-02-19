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
        set<int>st;
        for(int i = 0;i < n; i++){
            cin>>a;
            st.insert(a);
        }
        if(st.size() == n){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }

    }
}


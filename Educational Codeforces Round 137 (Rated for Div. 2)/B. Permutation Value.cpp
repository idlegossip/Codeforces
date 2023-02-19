///?? To begin with the name of almighty ALLAH.
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
        vector<int>v;
        int f = 0;
        int l = 1, r = n;
        for(int i = 1; i <= n; i +=2)
        {
            cout<<i<<' ';
            f = i;
        }
        if(f == n){
            f = n - 1;
        }
        else {
            f = n;
        }

        for(int i = f; i >= 1; i-=2)
            cout<<i<<' ';
        cout<<'\n';

    }
}


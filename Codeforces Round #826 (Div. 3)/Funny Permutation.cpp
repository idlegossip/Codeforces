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
        if(n == 3){
            cout<<-1<<'\n';
            continue;
        }


        int a;
        vector<int>v(n+1);
        int j = 1;
        for(int i = ((n+1)/2)+1; i <=n; i++){
            v[j++] = i;
        }
        for(int i = 1; i <= (n+1)/2; i++){
            v[j++] = i;
        }
         for(int i = 1; i <= n; i++){
            cout<<v[i]<<' ';

        }
         cout<<'\n';

    }
}


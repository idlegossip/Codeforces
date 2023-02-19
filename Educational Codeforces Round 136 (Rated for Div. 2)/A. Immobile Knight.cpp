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
        int n,m;
        cin>>n>>m;

        if(n <= 3 and m <=3){
          cout<<(n+1)/2<<' '<<(m+1)/2<<'\n';

        }
        else{
            cout<<n<<' '<<m<<'\n';
        }

    }
}


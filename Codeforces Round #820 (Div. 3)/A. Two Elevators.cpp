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
        ll a,b,c;
        cin>>a>>b>>c;
        if(b<c)
        {
           b=c+(c-b);
        }

        if(a<b)
            cout<<1<<'\n';
        else if(a > b)
            cout<<2<<'\n';
        else
            cout<<3<<'\n';


    }

}


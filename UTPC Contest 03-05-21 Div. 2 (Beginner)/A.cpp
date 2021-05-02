#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll  n,m;
    ll a;
    cin>>n;
    string str,res1,res2;
    ll mx=LONG_LONG_MIN;
    ll mn=LONG_LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>str>>a;
        if(a>mx)
        {
            res1=str;
            mx=a;
        }
        if(a<mn)

        {
            res2=str;
            mn=a;
        }
    }
    cout<<res2<<" "<<res1<<endl;

}

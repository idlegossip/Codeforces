#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin>>n;

    ll i,j,k,a;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n<3)
    {
        cout<<0<<endl;
        for(i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    vector<ll>res;
    ll l=n-1;
    i=0;
    cout<<(n-1)/2<<endl;
    bool f=1;
    while(i<=l)
    {
        if(f)
        {
            cout<<v[l--]<<" ";
            f=0;
        }
        else
        {
            cout<<v[i++]<<" ";
            f=1;
        }

    }
    cout<<endl;

    return 0;

}



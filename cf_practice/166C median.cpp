#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long>v;
    long long a,res=0;
    for(long long  i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long median=((n+1)/2);
    while(v[median-1]!=x)
    {
        v.push_back(x);
        sort(v.begin(),v.end());
        n++;
        median=((n+1)/2);
        res++;
    }
    cout<<res<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a,b;
        double res=0.0000000;
        vector<double>v,v2;
        cin>>n;
        for(ll i=0;i<2*n;i++)
        {
            cin>>a>>b;
            if(a==0)
                v.push_back(fabs(b));
            else
                v2.push_back(fabs(a));
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        for(ll i=0;i<n;i++)
        {
            double x=v[i]*v[i];
            double y=v2[i]*v2[i];
            //cout<<x<<" "<<y<<endl;
            x+=y;
            //cout<<x<<" t "<<endl;
            res+=sqrt(x);
        }
        cout<<fixed<<setprecision(10)<<res<<endl;
    }
}

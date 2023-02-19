#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll n ;
    cin>>n;
    vector<int>x(n+1),y(n+1),z(n+1),use(n+1,0);
    vector<pair<int,int> >ans;
    int a,b,c;
    for(int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(use[i]) continue;
        // cout<<x[i]<<' '<<y[i]<<' '<<z[i]<<endl;
        int k ;
        int f = 0;
        for(int j = 0; j < n; j++)
        {
            if(use[j] or i==j) continue;
            if(!f){
                k = j;
                f = 1;
                continue;
            }
            a = min(x[i],x[k]);
            b = max(x[i],x[k]);
            //cout<<a<<' '<<x[j]<<' '<<b<<'\n';
            if(x[j] <= b and x[j] >= a)
            {
                //cout<<"Enter x"<<endl;

                a = min(y[i],y[k]);
                b = max(y[i],y[k]);
                 //cout<<a<<' '<<y[j]<<' '<<b<<'\n';
                if(y[j] <= b and y[j] >= a)
                {
                    //cout<<"Enter y"<<endl;
                    a = min(z[i],z[k]);
                    b = max(z[i],z[k]);
                    //cout<<a<<' '<<z[j]<<' '<<b<<'\n';
                    if(z[j] <= b and z[j] >= a)
                    {
                        //cout<<"Enter z"<<endl;
                        k = j;
                    }
                }
            }
        }
       // cout<<i<<' '<<k<<'\n';
        ans.push_back({i+1,k+1});
        use[i] = 1;
        use[k] = 1;
    }
    for(int i = 0;i< n/2; i++)
        cout<<ans[i].first<< ' ' <<ans[i].second<<'\n';
}



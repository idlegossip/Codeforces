#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;

        vector<ll>v;
        string str;
        ll a;


        ll b;
        cin>>n>>k;
        k%=4;
        if(k%4==0)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';

            if(k==1 or k==3)
            {

                for(ll i=1;i<=n;i+=2)
                {
                    cout<<i<<" "<<i+1<<"\n";
                }

            }
            else if(k==2)
            {
                for(ll i=1;i<=n;i+=2)
                {
                    if(i%4==3) cout<<i<<" "<<i+1<<"\n";
                    else cout<<i+1<<" "<<i<<"\n";
                }
            }

        }



//        for(ll i=0;i<n;i++)
//        {
//            cin>>a;
//            v.push_back(a);
//        }




    }
}


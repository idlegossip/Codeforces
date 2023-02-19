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
        cin>>n;
        vector<ll>v;
    for(ll i=0; i<100; i++)
        v.push_back(i+1);
        for(ll k=0; k<n; k++)
        {
            if(k==0&&n>4)
            {
                swap(v[0],v[2]);
                swap(v[1],v[3]);
            }
            else  if(k!=2)
            {
              swap(v[k],v[2]);
            }
            else
            {
                swap(v[0],v[2]);
                 swap(v[1],v[2]);

            }


            for(ll i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            if(k==0&&n>4)
            {

                 swap(v[0],v[2]);
                 swap(v[1],v[3]);
            }
             else if(k!=2)
            {
              swap(v[k],v[2]);
            }
            else
            {
                swap(v[1],v[2]);
                swap(v[0],v[2]);
            }

        }

    }
}


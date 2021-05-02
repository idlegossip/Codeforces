#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n+10][n+10];
    ll cnt=1;
    k--;
    for(ll i=0; i<k; i++)
    {
        for(ll j=0; j<n; j++)
        {
            ar[j][i]=cnt;
            cnt++;
        }
    }
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=k; j<n; j++)
        {
            if(j==k)
                sum+=cnt;
            ar[i][j]=cnt;
            cnt++;
        }
    }
    cout<<sum<<endl;
     for(ll i=0;i<n;i++)
      {
            for(ll j=0;j<n;j++)
            {
                  cout<<ar[i][j]<<" ";
            }
            cout<<endl;
      }
      return  0;
}

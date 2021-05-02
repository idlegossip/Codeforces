#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n,m;
      ll a,b;
      ll sum=0,sum1=0,cnt=0;
      vector<ll>v;
      cin>>n>>m;
      for(ll i=0;i<n;i++)
      {
            cin>>a>>b;

            v.push_back(b-a);
            sum1+=(a-b);
            sum+=a;
      }
      sort(v.begin(),v.end());
      if((sum-sum1)>m)
            cout<<-1<<endl;
      else{
            for(ll i=0;i<n;i++)
            {
                  if(sum>m)
                  {
                        cnt++;
                        sum+=v[i];
                  }
            }
            cout<<cnt<<endl;
      }
      return 0;



}

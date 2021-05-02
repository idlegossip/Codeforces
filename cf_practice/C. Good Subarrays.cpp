#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      long long t;
      cin>>t;
      while(t--)
      {
            string str ;
            long long n,m;
            cin>>n;
            cin>>str;
           long long i,j,k;
           long long cum[n+10]={0};
            for(i=1;i<=n;i++)
            {
             cum[i]=cum[i-1]+(str[i-1]-'0')-1;
            }
            long long ans=0;
            map<long long,long long>mp;
            mp[0]=1;
            for(i=1;i<=n;i++)
            {       ans+=mp[cum[i]];
                  mp[cum[i]]++;

            }
            cout<<ans<<endl;
      }
      return 0;
}

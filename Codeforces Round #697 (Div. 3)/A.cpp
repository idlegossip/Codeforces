#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
         ll n;
         cin>>n;
         ll f=1;
         while(n%2==0)
         {
               n/=2;

         }
         if(n<=1)
         {
               cout<<"NO"<<endl;
         }
         else
            cout<<"YES"<<endl;
      }
}


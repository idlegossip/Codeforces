#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
       cout<<int(n/2)<<endl;
       if(n%2)
            cout<<3<<" ";
       else
            cout<<2<<" ";
       n/=2;
      for(int i=1;i<n;i++)
            cout<<2<<" ";
      cout<<endl;
      return 0;

}

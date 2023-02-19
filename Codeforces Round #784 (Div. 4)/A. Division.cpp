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
       if(n<=1399)
        cout<<"Division 4"<<endl;
       else if(n<=1599)
       {
            cout<<"Division 3"<<endl;
       }
       else if(n<=1899)
         cout<<"Division 2"<<endl;
       else
         cout<<"Division 1"<<endl;

    }
}



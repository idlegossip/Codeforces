#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll a=k/n;
        if(k%n)
            a++;
        if(n>k)
        {
              if(n%k)

            cout<<2<<endl;
            else
                  cout<<1<<endl;
        }
        else
            cout<<a<<endl;



    }
}


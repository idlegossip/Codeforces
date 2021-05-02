#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";
    ll res=0;
    ll n,k,a=0;
    cin>>n>>k;
    ll i=0;
    while(1)
    {
        for(ll j=0; j<k; j++)
        {
            if(a%2)
                cout<<str[j];
            else
                cout<<str[i];
            a++;
            n--;
            if(n==0)
                break;
        }
        //cout<<str[i]<<" "<<i<<endl;
        i++;
        i%=k;
        if(n==0)
            break;

    }
    cout<<endl;
}



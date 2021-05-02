#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    ll n=str.size();
    ll ar[n+10];
    ar[0]=1;
    ll cnt=1;
    ll pr=0;
    ll ind=0;
    for(ll i=1; i<n; i++)
    {
        if(str[i-1]==str[i])
            cnt++;
        else
        {
            if(cnt==1)
            {
                cout<<str[ind];
                pr=1;
            }
            else
            {
                if(pr<=1)
                {
                    pr=2;
                    cout<<str[ind]<<str[ind];
                }
                else
                {
                    pr=1;
                    cout<<str[ind];
                }

            }
            cnt=1;
            ind=i;
        }

    }
    if(cnt==1)
    {
        cout<<str[ind];
    }
    else
    {
        if(pr<=1)
        {
            pr=2;
            cout<<str[ind]<<str[ind];
        }
        else
        {
            pr=1;
               cout<<str[ind];
        }

    }



}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    char ch;
    string str;
    ll mn=1e10 ;
    ll mx=-1e10;
    ll n,a;
    ll f=1;
    for(ll i=0; i<n; i++)
    {
        cin>>str>>a>>ch;
        if(!i)
        {
            if(str==">")
                mn=a+1;
            else if(str=="<")
                mx=a-1;
            else if(str==">=")
                mn=a;
            else
                mx=a;
            continue;
        }
        if(ch=='Y')
        {
            if(str==">")
            {
                if(a<mx)
                    mn=a+1;
                else
                    f=0;
            }
            else if(str=="<")
            {
                if(a>mn)
                    mx=a-1;
                else
                    f=0;
            }
            else if(str==">=")
            {
                if(a<=mx)
                    mn=a;
                else
                    f=0;
            }
            else
            {
                if(a>=mn)
                    mn=a;
                else
                    f=0;
            }
        }
        else
        {
            if(str==">")
            {

            }
            else if(str=="<")
            {

            }
            else if(str==">=")
            {

            }
            else
            {

            }
        }
    }
}

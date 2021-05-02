
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n;
        cin>>n;
        cin>>str;

        ll i,j,k;
        ll cnt=0;
        ll res=0;
        queue<char>q;
        ll f=0;
        for(i=0; i<n; i++)
        {
            if(str[i]=='-')
            {
                res++;
            }
            else if(str[i]=='<')
            {
                f=1;
                if(str[(i+1+n)%n]=='-')
                    cnt++;

            }

        }
        ll f1=0;
        if(cnt<n)
        {
            for(i=0; i<n; i++)
            {
                if(str[i]=='>')
                {
                    f1=1;
                    if(str[(i+1)%n]=='-')
                        res++;


                }

            }
        }
        if(f==0)
            res=n;
        if(f1==0)
            cnt=0,res=n;
        cout<<(cnt+res)<<endl;
    }
}

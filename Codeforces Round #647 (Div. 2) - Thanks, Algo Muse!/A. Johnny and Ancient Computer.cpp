#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a<b)
            swap(a,b);
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        ll res=0;
        ll f=0;
        while(a%2==0)
        {
            a/=2;
            res++;
            if(a==b)
            {
                f=1;
                break;
            }

        }
        if(f)
        {
            a=res/3;
            res=res-(res/3);
            a+=res/4;
            res=res-(res/2);
            a+=res;
            cout<<res<<endl;
        }
        else
            cout<<-1<<endl;
    }
}

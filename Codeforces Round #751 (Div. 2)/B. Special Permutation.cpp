#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,bx,by,cx,cy;
        cin>>n>>bx>>by;
        ll f=1;
        if(n==2)
        {
            cout<<bx<<" "<<by<<'\n';
            continue;

        }
        if((bx>(n/2)+1||by<(n/2))||(bx<=(n/2)&&by<=n/2)||(bx>n/2&&by>n/2))
        {
            cout<<-1<<endl;
            continue;
        }
        if(bx==((n/2)+1))
        {
            for(cx=n; cx>=1; cx--)
                  cout<<cx<<" ";
        }
        else
        {
            for(cx=n; cx>=1; cx--)
            {
                if(cx==by)
                cout<<bx<<" ";
                else if(cx==bx)
                 cout<<by<<" ";
                else
                     cout<<cx<<" ";


            }
        }





        cout<<'\n';

    }
}


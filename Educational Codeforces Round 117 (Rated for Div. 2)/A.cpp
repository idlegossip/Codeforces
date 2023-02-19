#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll bx,by,cx,cy;
        cin>>bx>>by;
        ll f=1;
        for(cx=0;cx<=1000;cx++)
        {
            for(cy=0;cy<=1000;cy++)
            {
                if((2*(cx+cy)==bx+by)&&2*(abs(bx-cx)+abs(by-cy))==bx+by)
                {
                    cout<<cx<<" "<<cy<<endl;
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
        if(f)
        {
            cout<<-1<<" "<<-1<<'\n';
        }

    }
}

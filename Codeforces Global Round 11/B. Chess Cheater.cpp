
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll a=0,b=0;
        ll n,k,ind=-1;
        cin>>n>>k;
        ll v[n];
        string str;
        cin>>str;
        ll lose=0;
        ll f=1;
        for(ll i=0; i<n; i++)
            v[i]=0;

        for(ll i=0; i<n; i++)
        {
            if(str[i]=='W')
            {
                a++;
                if(i==0||str[i-1]=='L')
                    b++;
            }
            else
            {
                lose++;
                if(i==0||str[i-1]=='W')
                    ind++,v[ind]++;
                else
                    v[ind]++;

            }
        }
        if(k>=lose)
        {
            cout<<(2*n)-1<<endl;
            continue;
        }
        if(a==0)
        {
            if(k>0)
                cout<<(2*k)-1<<endl;
            else
                cout<<0<<endl;
            continue;
        }
        if(str[0]=='L')
            v[0]=1e10;
        if(str[n-1]=='L')
            v[ind]=1e10;

        sort(v,v+ind+1);
        ll c=k;
        ll cnt=0;
        for(ll i=0; i<=ind; i++)
        {
            if(k>=v[i])
                k-=v[i],cnt++;
            else
                break;
        }
        cout<<2*(a+c)-b+cnt<<endl;
    }
    return 0;
}

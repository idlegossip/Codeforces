#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll m,i,j,k,ans=0;
    cin>>n;
    ans=n;
    ll div=n;
    ll cnt=0;
    for(i=2; i*i<=n; i++)
    {
        ll f=0;
        while(n%i==0)
        {
            n/=i;
            f=1;

        }
        if(f)
        {
            div=min(i,div);
            cnt++;
        }
    }
    if(n>1)
        div=min(n,div);

    if(n!=1&&n!=ans)
        cnt++;
    if(cnt==0)
        cout<<n<<endl;
    else if(cnt==1)
        cout<<div<<endl;
    else
        cout<<1<<endl;
    return 0;

}

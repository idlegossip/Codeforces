#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        unsigned long long a,b,c,d;
        unsigned long long x,y,n,m;
        cin>>x>>y>>n;
        long long res=0;
        long long need=(n+(y*n))-1LL;
        res=(need/(x-1LL));
        if(need%(x-1LL))
            res++;

        cout<<res+n<<endl;

    }

    return 0;
}



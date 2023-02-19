#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll cnt2 = 0;
        ll cnt5 = 0;
        ll tmp = n;
        while(tmp%2==0)
        {
            cnt2++;
            tmp/=2;
        }
        while(tmp%5==0)
        {
            cnt5++;
            tmp/=5;
        }
        int f = 0;
        int f1= 0;
        tmp = 1;

        if(cnt2>cnt5)
        {
            //cout<<tmp<<'\n';
            for(int i = 1; i <=(cnt2 - cnt5) ; i++)
            {
                if((1LL*tmp * 5) > m)
                    break;
                tmp *= 5 ;
                f1 = 1;
                f = 1;

            }
        }
        else if(cnt2<cnt5)
        {
            for(int i = 1; i <=(cnt5 - cnt2) ; i++)
            {
                if((1LL*tmp * 2) > m)
                    break;
                tmp *= 2 ;
                f1 = 1;
                f = 1;
            }
        }
        for(int i = 1; i<= 30 ; i++)
        {
            if((1LL*tmp * 10)<=m)
                tmp *= 10,f1=1,f=1;
        }
        for(ll  j= 9; j >= 2; j--)
        {
            if((1LL*tmp * j)<=m)
                tmp *= j;

        }

        if(!f or !f1)
        {
            cout<<n*m<<'\n';
        }
        else
        {
            cout<<n * tmp<<'\n';
        }



//        vector<ll>v;
//        ll a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}


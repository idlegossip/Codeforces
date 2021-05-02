#include<bits/stdc++.h>
using namespace std;
#define ll long long
string str[1010];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll i,j,k;
        cin>>n;
        ll l=0,r=0;

        for(ll i=0; i<n; i++)
        {
            cin>>str[i];
        }
        ll cnt=0;
        ll s1=0,s2=0,f1=0,f2=0;
        if(str[0][1]=='1')
            cnt++,s1=1;
        if(str[1][0]=='1')
            cnt++,s2=1;
        if(str[n-1][n-2]=='0')
            cnt++,f1=1;
        if(str[n-2][n-1]=='0')
            cnt++,f2=1;
        if(cnt>=3)
        {
            cnt=0;
            s1=0,s2=0,f1=0,f2=0;
            if(str[0][1]=='0')
                cnt++,s1=1;
            if(str[1][0]=='0')
                cnt++,s2=1;
            if(str[n-1][n-2]=='1')
                cnt++,f1=1;
            if(str[n-2][n-1]=='1')
                cnt++,f2=1;

        }
        cout<<cnt<<endl;
        if(s1)
            cout<<"1 2"<<endl;
        if(s2)
            cout<<"2 1"<<endl;
        if(f1)
            cout<<n<<" "<<n-1<<endl;
        if(f2)
            cout<<n-1<<" "<<n<<endl;
    }
    return 0;
}



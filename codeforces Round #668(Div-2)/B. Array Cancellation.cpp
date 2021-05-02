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

        ll a,b,c;
        ll i,j,k,n;
        cin>>n>>k;
        cin>>str;

        ll zero=0;
        ll one=0;
        ll ch=1;
        ll sum=0;
        for(i=0; i<k; i++)
        {
            ll temp=-1;
            for(j=i; j<n; j+=k)
            {
                if(str[j]!='?')
                {
                    if(temp!=-1&&temp!=str[j]-'0')
                    {
                        ch=0;
                        break;
                    }
                    temp=str[j]-'0';
                }
            }
            if(temp==0)
                zero++;
            if(temp==1)
                one++;
        }
        sum=max(zero,one);
        if(sum>k/2)
            ch=0;
        if(ch)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

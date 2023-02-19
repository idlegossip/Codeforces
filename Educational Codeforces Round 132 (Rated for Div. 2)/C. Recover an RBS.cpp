#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[201010];
//ll dp[201010][3];
ll n ;
ll cn=0;
void go(ll ind,ll f,ll sum=0)
{
    if(cn>=2) return;
    if(sum<0)
        return;
    if(ind == n)
    {
        // cout<<"ind "<<ind <<" "<<sum<<endl;
        if(sum == 0)
        {
            cn++;
            return ;
        }
        return;
    }
    if(ar[ind]==0)
    {
        if(cn<=1)
            go(ind+1,0,sum-1);
        if(cn<=1)
            go(ind+1,1,sum+1);
    }
    else if(cn<=1)
        go(ind+1,0,sum+ar[ind]);
    return ;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        cn=0;
        //memset(dp,-1,sizeof(dp));
        string str;
        cin>>str;
        n = str.size();

        for(ll i=0; i<n; i++)
        {
            if(str[i]==')')
                ar[i] = -1;
            else if(str[i]=='(')
                ar[i] = 1;
            else
            {

                ar[i] = 0;
                if(i==0)
                    ar[i] = 1;
                else if(i==n-1)
                    ar[i] = -1;

            }

        }
       go(0,0);
        //cout<<cnt<<" t  "<<endl;
        if(cn == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        for(ll i=0; i<=n; i++)ar[i]=0;


    }
}

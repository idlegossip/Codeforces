#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll dp[10][1000010];

string res="";
ll ar[110];
string s="123456789";

void knap(ll ind,ll val,string str)
{
    if(str.size()>res.size())
    {
        cout<<ind<<endl;
        res=str;
    }
    if(str.size()==res.size()&&str>res)
    {
        cout<<"s"<<ind<<endl;
        res=str;
    }
    if(val==n)
        return;
    if(dp[ind][val])
        return;
    for(ll i=0; i<9; i++)
    {

        if(ar[i]+val<=n)
        {
            // cout<<ind<<" "<<val<<" "<<i<<" "<<" "<<str.size()<<endl;
            knap(i,val+ar[i],str+s[i]);
        }
    }
    dp[ind][val]=1;
    return;

}
int main()
{
    cin>>n;
    for(ll i=0;i<9;i++)
        cin>>ar[i];
    knap(0,0,"");
    cout<<res<<endl;
}

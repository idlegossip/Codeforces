#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3005;
string dp[N][N];
ll ar[N];
string str;
string an="";

string  go(ll i,ll j)
{
    if(i>j) return "";
    if(i==j)
    {
        string s ="";
        s+=str[i];
        return s;
    }
    if(dp[i][j]!="-1") return dp[i][j];
//    if(f==1)

       string ans = "",ans1="";
       ll tn=0,tn1=0;
       string a = go(i+2,j);
       string b= go(i+1,j-1);
       if(a<b)
       {
          ans=str[i]+b;
          tn=i+1;
       }
       else
       {
         ans=str[i]+a;
          tn=j;
       }

       a = go(i,j-2);
       b= go(i+1,j-1);
       if(a<b)
       {
          ans=str[j] +b;
          tn1=i;
       }
       else
       {
         ans=str[j] +a;
          tn1=j-1;
       }
      if(ans<ans1)
      {
         an=min(an+str[tn],an);
          ans = min(ans,ans1);
      }
      else
      {
         an=min(an+str[tn1],an);
         ans = min(ans,ans1);
      }
        return dp[i][j]=ans;
//    else
//         return dp[i][j][f]=max(ar[i]+go(i+2,j,0),ar[j]+go(i,j-2,0));
}


int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        for(ll i = 0;i<=n;i++)
            for(ll j =0;j<=n;j++)
                dp[i][j]="-1";
        ll a;
        cin>>str ;
        n = str.size();
        string s = go(0,n-1);
        cout<<'\n';
        cout<<"  "<<s<<'\n';
        if(s==an)
        cout<<"draw"<<'\n';
        else if(s<an)
        {
            cout<<"Alice"<<'\n';
        }
        else
            cout<<"Bob"<<'\n';



    }
}


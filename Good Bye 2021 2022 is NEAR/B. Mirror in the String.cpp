#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str,s,ss;
        cin>>str;
        string res="{";
        string ne="";
        for(ll i=0; i<n; i++)
        {
            if(str[i])
            ne+=str[i];
            s=ne;
            ss=ne;
            reverse(ss.begin(),ss.end());
            s+=ss;

            if(s<res)
            {
                res=s;
                //cout<<res<<endl;
            }
        }
        cout<<res<<endl;
    }
}


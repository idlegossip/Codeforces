#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k;
    cin>>n>>k;
    string str[n+10];
    for(ll i=0; i<n; i++)
        cin>>str[i];
    ll res=0;
    map<string,ll>mp;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            string s="";
            for(ll ii=0; ii<k; ii++)
            {
                if(str[i][ii]==str[j][ii])
                    s+=str[i][ii];
                else
                {
                    if(str[i][ii]!='E'&&'E'!=str[j][ii])
                        s+='E';
                    else if(str[i][ii]!='S'&&'S'!=str[j][ii])
                        s+='S';
                    else
                        s+='T';
                }
            }
            res+=mp[s];

        }
         mp[str[i]]++;
    }
    cout<<res<<endl;
}

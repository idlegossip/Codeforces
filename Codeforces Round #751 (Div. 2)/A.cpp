#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str,s;
        ll n;
        cin>>str;
        n=str.size();
        s=str;
        sort(s.begin(),s.end());
        cout<<s[0]<<" ";
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            if(f==0&&s[0]==str[i])
            {
                f=1;
                continue;
            }
            cout<<str[i];

        }
        cout<<endl;

    }
}

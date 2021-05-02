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
        cin>>str;
        ll n=str.size();
        ll i,j,k;
        ll cnt=0;
        ll res=0;
        queue<char>q;
        for(i=0; i<n; i++)
        {
            if(str[i]=='A')
            {
                  q.push(str[i]);
            }
            else
            {
                  if(q.empty())
                  {
                     q.push(str[i])   ;
                  }
                  else
                  {
                   q.pop();
                  }
            }

        }
        cout<<q.size()<<endl;
    }
}

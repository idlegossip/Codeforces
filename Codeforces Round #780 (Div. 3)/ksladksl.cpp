#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string str;
    cin>>str;
    ll n=str.size();
    ll e=0,t=0,y=0,p=0,g=0;
    for(ll i=0;i<n;i++)
    {
        char ch=tolower(str[i]);
        if(ch=='e')
            e++;
        if(ch=='g')
            g++;
        if(ch=='y')
            y++;
        if(ch=='p')
            p++;
        if(ch=='t')
            t++;
    }
    ll mn=min({e,g,p,t,y});
    cout<<mn<<endl;
}

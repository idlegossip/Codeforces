#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll ts;
    cin>>ts;
    while(ts--)
    {
        string str;
        ll n;
        cin>>n;
        cin>>str;
        char res[60][60];
        ll t=0,e=0;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='2')
            {
                t++;
                v.push_back(i);
            }
            res[i][i]='X';
        }

        if(t>0&&t<3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

        if(t)
        {
            for(ll i=0; i<t-1; i++)
            {
                res[v[i]][v[i+1]]='+';
                res[v[i+1]][v[i]]='-';
            }
            res[v[0]][v[t-1]]='-';
            res[v[t-1]][v[0]]='+';
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                if(str[i]=='2')
                {
                    if(str[j]=='2'&&res[i][j]!='+'&&res[i][j]!='-')
                    {
                        res[i][j]='+';
                        res[j][i]='-';
                    }
                    continue;
                }
                if(str[i]==str[j])
                {
                    res[i][j]='=';
                }
                else
                {
                    res[i][j]='+';
                    res[j][i]='-';
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cout<<res[i][j];
            }
            cout<<endl;

        }


    }
}


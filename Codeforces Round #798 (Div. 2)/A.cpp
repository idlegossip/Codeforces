#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        string a,b,c="";
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll i=0,j=0;
        ll cnti=0,cntj=0;
        while(1)
        {
            if(a[i]<b[j]&&cnti<k)
            {
                c+=a[i++];
                cnti++;
                cntj=0;
            }
            else if(cntj<k)
            {
                c+=b[j++];
                cntj++;
                cnti=0;
            }
            else
            {
                c+=a[i++];
                cnti++;
                cntj=0;
            }
             if(i==n||j==m)
            break;


        }
        cout<<c<<endl;
    }
}

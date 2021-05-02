#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b)%2)
        {
            if(a+d>0)
                cout<<"Ya";
            else
                cout<<"Tidak";
            if(c+b>0)
                cout<<" Ya";
            else
                cout<<" Tidak";
            cout<<" Tidak Tidak"<<endl;
        }
        else
        {
            cout<<"Tidak Tidak ";
             if(c+b>0)
                cout<<" Ya";
            else
                cout<<" Tidak";
            if(a+d>0)
                cout<<" Ya";
            else
                cout<<" Tidak";

            cout<<endl;


        }
    }
    return 0;
}

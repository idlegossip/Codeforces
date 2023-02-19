#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll d;
       ll a,b,c;
        cin>>a>>b>>c;
        ll f=0;
        ll aa=b-(c-b);
        ll bb=a+(c-a)/2;
        ll cc=a+(b-a)*2;



           if(aa>=a&&aa%a==0&&aa!=0)
           {
                f=1;
           }
           else if(bb>=b&&(c-a)%2==0&&bb%b==0&&bb!=0)
           {
                f=1;
           }
           else if(cc>=c&&cc%c==0&&cc!=0)
            f=1;


        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}


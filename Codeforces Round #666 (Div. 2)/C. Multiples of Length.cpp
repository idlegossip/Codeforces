#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n;
    long long i,j,k;
    long long cum[n+10];
    for(i=1; i<=n; i++)
    {
        cin>>cum[i];
    }
    if(n==1)
    {
        cout<<"1 1"<<endl;
        cout<<0<<endl;
        cout<<"1 1"<<endl;
        cout<<0<<endl;
        cout<<"1 1"<<endl;
        cout<<-cum[1]<<endl;
    }
    else
    {
        cout<<"1 1"<<endl;
        cout<<-cum[1]<<endl;
        cum[1]=0;
        cout<<"1 "<<n<<endl;
        for(i=1; i<=n; i++)
            cout<<-(cum[i]*n)<<" ";
        cout<<endl;
        cout<<"2 "<<n<<endl;
        for(i=2; i<=n; i++)
            cout<<(cum[i]*(n-1))<<" ";
        cout<<endl;

    }
    return 0;
}


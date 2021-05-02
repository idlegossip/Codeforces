 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n;
        cin>>n;
        ll res=n/2;;
        if(n%2)
        {
                cout<<2*(res+1)*(res+2)<<endl;
        }
        else
        cout<<(res+1)*(res+1)<<endl;


    return 0;
}


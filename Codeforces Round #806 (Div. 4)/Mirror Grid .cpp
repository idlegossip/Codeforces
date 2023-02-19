#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;

        cin>>n;
        string ar[n+1];
string br[n+1];


        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        ll ans = LONG_MAX;
        ll cnt=0;
        for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j] = ar[i][j];

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(br[j][i]!=br[i][n-j-1])
                {
                    br[i][n-j-1]=br[j][i];
                    cnt++;
                }
                if(br[j][i]!=br[n-j-1][n-i-1])
                {
                    br[n-j-1][n-i-1]=br[j][i];
                    cnt++;
                }
                if(br[j][i]!=br[n-i-1][j])
                {
                    br[n-i-1][j]=br[j][i];
                    cnt++;
                }

            }
        }
        for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j] = ar[i][j];

        ans = min( ans, cnt);
        cnt=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(br[j][i]!=br[i][n-j-1])
                {
                    br[j][i] =  br[i][n-j-1];
                    cnt++;
                }
                if( br[i][n-j-1]!=br[n-j-1][n-i-1])
                {
                    br[n-j-1][n-i-1] = br[i][n-j-1];
                    cnt++;
                }
                if( br[i][n-j-1]!=br[n-i-1][j])
                {
                     br[n-i-1][j] =br[i][n-j-1] ;
                    cnt++;
                }

            }
        }
        for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j] = ar[i][j];

        ans = min( ans, cnt);
        cnt=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(br[j][i]!=br[n-j-1][n-i-1] )
                {
                    br[j][i] = br[n-j-1][n-i-1];
                    cnt++;
                }
                if(br[i][n-j-1]!=br[n-j-1][n-i-1])
                {
                    br[i][n-i-1]=br[n-j-1][n-i-1];
                    cnt++;
                }
                if(br[n-j-1][n-i-1]!=br[n-i-1][j])
                {
                    br[n-i-1][j]=br[n-j-1][n-i-1];
                    cnt++;
                }

            }
        }
        for(ll i=0; i<n; i++) for(ll j=0; j<n; j++) br[i][j] = ar[i][j];

        ans = min( ans, cnt);
        cnt=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(br[n-i-1][j]!=br[i][n-j-1])
                {
                    br[i][n-j-1]=br[n-i-1][j];
                    cnt++;
                }
                if(br[n-i-1][j]!=br[n-j-1][n-i-1])
                {
                   br[n-j-1][n-i-1]=br[n-i-1][j];
                    cnt++;
                }
                if(br[j][i]!=br[n-i-1][j])
                {
                    br[j][i] = br[n-i-1][j];
                    cnt++;
                }

            }
        }
        ans = min( ans, cnt);
        cout<<ans<<endl;



    }
}



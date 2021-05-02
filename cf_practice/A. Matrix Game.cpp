#include<bits/stdc++.h>
using namespace std;
int dx[]= {0,0,1,-1};
int dy[]= {-1,1,0,0};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k;
        int n,m;
        cin>>n>>m;
        int ar[100][100];
        int v=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cin>>ar[i][j];

        }
        for(i=0; i<n; i++)
        {
            for(k=0; k<m; k++)
            {
                if(ar[i][k])
                    break;

                int f=1;
                for(j=0; j<m; j++)
                {
                    if(ar[i][j])
                    {
                        f=0;
                        break;
                    }
                }
                for(j=0; j<n; j++)
                {
                    if(ar[j][k])
                    {
                        f=0;
                        break;
                    }
                }
                if(f)
                {
                    //cout<<i<<" "<<k<<endl;
                    ar[i][k]=1;
                    v++;
                }
            }
        }
       // cout<<v<<endl;

        if(v%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
    return 0;
}

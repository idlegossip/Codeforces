#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string ans="";
        for(int i = n-1;i>=0; )
        {
            if(str[i]=='0'){
                int num = (str[i-2]-'0')*10+(str[i-1]-'0');
               // cout<<(char)('a'+num-1)<<'\n';
                ans+=(char)('a'+num-1);
                i-=3;
            }
            else{
                int num =(str[i]-'0');
                ans+=(char)('a'+num-1);
                i--;
            }

        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';

    }

}



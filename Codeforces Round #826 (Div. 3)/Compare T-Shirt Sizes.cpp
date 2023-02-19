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
        string s,s1;
        cin>>s>>s1;
        int n = s.size();
        int n1 = s1.size();
        if(s==s1){
            cout<<"=\n";
            continue;
        }

        if(s[n-1] == 'S' and s[n-1] != s1[n1-1]){
            cout<<"<\n";
        }
        else if(s[n-1] =='L' and  s[n-1] != s1[n1-1]){
             cout<<">\n";
        }
       else if(s[n-1] =='M' and s1[n1-1] == 'S'){
             cout<<">\n";
        }
        else if(s[n-1] =='M' and  s1[n1-1] == 'L'){
             cout<<"<\n";
        }
        else {
                if(s[n-1] == 'S'){
                    if(n < n1){
                        cout<<">\n";
                    }
                    else{
                       cout<<"<\n";
                    }
                }
                else{
                   if(n > n1){
                        cout<<">\n";
                    }
                    else{
                       cout<<"<\n";
                    }
                }

        }


//        int a;
//        vector<int>v;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}


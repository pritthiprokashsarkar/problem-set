#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        bool key=0;
        string s; cin>>s;
        for(int i=1;i<s.size();i+=3){
                if(s[i]==s[i+1]){
                    continue;
                }
                else{
                    key=1;
                }
            }
        if(key==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
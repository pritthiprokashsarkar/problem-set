#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        string s; cin>>s;
        string ans,ans1;
        for(char it='a'; it<='h';it++){
            if(it!=s[0]) ans+=it;
        }
        for(char i='1';i<='8';i++){
            if(i!=s[1])ans1+=i;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<s[1]<<endl;
        }
        for(int i=0;i<ans1.size();i++){
            cout<<s[0]<<ans1[i]<<endl;
        }
    }
}
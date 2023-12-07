/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        string s,ans; cin>>s;
        vector<int>l,u;
        int cnt=0;
        int b_cnt=0,B_cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='b' and s[i]!='B'){
                ans+=s[i];
                cnt++;
                if(s[i]>='A' and s[i]<='Z') u.push_back(i);
                if(s[i]>='a' and s[i]<='z') l.push_back(i);
            }else{
                if(s[i]=='B' and u.size()>0){
                    ans[u.back()]='*';
                    u.pop_back();
                }else if(s[i]=='b' and l.size()>0){
                    ans[l.back()]='*';
                    l.pop_back();
                }else{
                    continue;
                }
            }
            cout<<ans<<endl;
            for(auto it:l)cout<<it<<" ";
            cout<<endl;
            for(auto it:u)cout<<it<<" ";
            cout<<endl;
        }
        string ans1;
        for(auto it:ans){
            if(it!='*') ans1+=it;
        }
       // cout<<ans1<<endl;
    }
} */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        string s,ans; cin>>s;
        vector<int>l,u;
        int cnt=-1;
        for(auto it:s){
            if(it!='b' and it!='B'){
                ans+=it;
                cnt++;
                if(it>='A' and it<='Z') u.push_back(cnt);
                if(it>='a' and it<='z') l.push_back(cnt);
            }else{
                if(it=='B' and u.size()>0){
                    ans[u.back()]='*';
                    u.pop_back();
                }else if(it=='b' and l.size()>0){
                    ans[l.back()]='*';
                    l.pop_back();
                }else{
                    continue;
                }
            }
        }
        string ans1;
        for(auto it:ans){
        if(it!='*') ans1+=it;
        }
        cout<<ans1<<endl;
    }
}
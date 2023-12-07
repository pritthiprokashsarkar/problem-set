#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>mp;
        int mx=0;
        for(int i=0;i<n;i++){
            int a=++mp[s[i]];
            mx=max(mx,a);
        }
        if(mx<n/2 or mx==1){
            if(n%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }else{
            cout<<abs(2*mx-n)<<endl;
        }
    }
}
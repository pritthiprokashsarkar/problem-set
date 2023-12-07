#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test; 
    while(test--){
        int n; cin>>n;
        string s; cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')cnt0++;
        }
        if(cnt0>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
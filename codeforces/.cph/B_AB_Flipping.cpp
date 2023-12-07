#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        string s; cin>>s;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='A' && s[i+1]=='B'){
                flag=true;
                break;
            }
        }
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                start=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                end=i;
            }
        }
        if(flag){
            cout<<end-start<<endl;
        }
        else cout<<0<<endl;
    }
}
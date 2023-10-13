#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    if(n%2==1){
        cout<<"Mike"<<endl;
    }
    else{
        int mx=INT_MAX,key=1;;
        for(int i=1;i<=n;i++){
            if(a[i]<a[key]){
                key=i;
            }
        }
        if(key%2)cout<<"Joe"<<endl;
        else cout<<"Mike"<<endl;
    }
    } 
int main()
{
    int tt;cin>>tt;
    while(tt--){
        solve();
    }
}
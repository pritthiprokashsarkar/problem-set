#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    long long ans=1;
    int mod=47;
    for(int i=2;i<=n;i++){
        ans=(ans*i)%mod;
    }
    cout<<ans<<endl;
    cout<<ans%mod<<endl;
}
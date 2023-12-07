#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long l,r,x=1,ans=0;
    cin>>l>>r;
    while(x<l){
        x=x*2;
    }
    while(x<=r){
        ans+=x;
        x=x*2;
    }
    cout<<ans<<endl;
}
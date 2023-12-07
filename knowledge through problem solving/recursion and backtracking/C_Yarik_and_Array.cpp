#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int curr=arr[0];
        int ans=arr[0];
        for(int i=1;i<n;i++){
            if(curr<0) curr=0;
            curr+=arr[i];
            if(curr<0 or (abs(arr[i])%2==abs(arr[i-1])%2)){
                curr=arr[i];
            }  
            ans=max(ans,curr);
        }
        cout<<ans<<endl;
    }
}
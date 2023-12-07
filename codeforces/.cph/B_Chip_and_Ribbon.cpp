#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
    int n; cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            ans+=(arr[i]-arr[i-1]);
        }
    }
    cout<<ans+(arr[0]-1)<<endl;
    }
}
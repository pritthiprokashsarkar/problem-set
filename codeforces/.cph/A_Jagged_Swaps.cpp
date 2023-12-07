#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=1;j<n-1;j++){
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }
        }
        int key=1;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                key=0;
                break;
            }   
        }
        if(key==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
}
}
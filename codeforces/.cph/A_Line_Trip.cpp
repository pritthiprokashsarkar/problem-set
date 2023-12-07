#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n,x;cin>>n>>x;
        int arr[n+2];
        arr[0]=0;
        for(int i=1;i<=n;i++) cin>>arr[i];
        arr[n+1]=x;
        int lo=0;
        int hi=200;
        while(hi-lo>=0){
            int mid=(hi+lo)/2;
            int max_dis=-1;
            for(int i=1;i<=n+1;i++){
                max_dis=max(arr[i]-arr[i-1],max_dis);
            }
            int maxi=arr[n+1]-arr[n];
            max_dis=max(max_dis,2*maxi);
            if(mid>=max_dis){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        cout<<lo<<endl;
    }
}
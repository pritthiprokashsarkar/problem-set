#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int arr[n];
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx=max(arr[i],mx);
            mn=min(arr[i],mn);
        }
        vector<int>ans;
        while(mx!=mn){
            if(mx%2==mn%2) ans.push_back(0);
            else if(mx%2==0){
                ans.push_back(mx);
                mx+=mx;
                mn+=mx;
            }else{
                ans.push_back(0);
            }
            mx/=2;
            mn/=2;
        }
        cout<<ans.size()<<endl;
        if(ans.size()<=n and ans.size()!=0){
            for(auto &it:ans) cout<<it<<" ";
            cout<<endl;
        }
    }
}
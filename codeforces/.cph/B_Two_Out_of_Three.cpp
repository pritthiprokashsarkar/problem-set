#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test; 
    while(test--){
        int n; cin>>n;
        int arr[n];
        vector<int>v,ans(n,1),freq(101,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
            if(freq[arr[i]]==2){
                v.push_back(i);
                cnt++;
            }
        }
        if(cnt<2)cout<<-1<<endl;
        else{
            ans[v[0]]=2;
            ans[v[1]]=3;
            for(auto it: ans){
                cout<<it<<" ";
            }cout<<endl;
        }
    }
}
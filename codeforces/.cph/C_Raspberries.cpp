#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n,k; cin>>n>>k;
        int arr[n];
        int fo=0;
        int ec=0;
        bool flag1=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                fo++;
            }
            if(arr[i]%2==0){
                ec++;
            }
        }
        if(k!=4){
            int mn=INT_MAX;
            for(int i=0;i<n;i++){
                if(arr[i]%k==0){
                    mn=0;
                }else{
                int a=arr[i]/k;
                ++a;
                mn=min(a*k-arr[i],mn);
                }
            }
            cout<<mn<<endl;
        }else{
            bool ans=false;
            bool flag=false,flag1=false;
            
            for(int i=0;i<n;i++){
                if(arr[i]%4==0){
                    flag=true;
                }
                if((arr[i]+1)%4==0){
                    flag1=true;
                }
            }
            if(flag or ec>1){
                cout<<0<<endl;
                continue;
            }
            else if((fo>0 and ec>0) or flag1)cout<<1<<endl;
            else cout<<2<<endl;
            
        }   
    }
}
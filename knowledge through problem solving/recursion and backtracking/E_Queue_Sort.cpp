#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int ind_of_mini_element=-1;
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int>b;
        b=arr;
        sort(b.begin(),b.end());
        if(b==arr){
            cout<<0<<endl;
            continue;
        }
        int mini=*min_element(arr.begin(),arr.end());
        //cout<<"miniii"<<mini<<endl;
        for(int i=0;i<n;i++){
            if(arr[i]==mini){
                ind_of_mini_element=i;
                break;
            }
        }
        //cout<<"mini "<<ind_of_mini_element<<endl;
        if(ind_of_mini_element==n-1 or is_sorted(arr.begin()+ind_of_mini_element,arr.end())){
            cout<<ind_of_mini_element<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}
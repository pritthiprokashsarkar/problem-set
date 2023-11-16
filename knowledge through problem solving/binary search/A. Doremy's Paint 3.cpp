#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n; 
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.size()==1) {
        cout<<"Yes"<<endl;
    }
    else if(mp.size()>2 ) cout<<"No"<<endl;
    else{
        auto it1=mp.begin();
        auto it2=++mp.begin();
        int num1=(*it1).second;
        int num2=(*it2).second;
        cout<<num1<<" "<<num2<<endl;
        if(num1==1 and num2==1)
        {
            cout<<"Yes"<<endl;
        }
        //cout<<num1<<" "<<num2<<endl;
        else if(abs(num1-num2)==1){
            cout<<"Yes"<<endl;
        } else{
            cout<<"No"<<endl;
        }

    }
    }
    
}
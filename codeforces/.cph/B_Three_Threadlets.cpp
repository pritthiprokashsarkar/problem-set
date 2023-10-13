#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        vector<int>a(3);
        for(int i=0;i<3;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int min=a[0];
        if(a[1]%min!=0 || a[2]%min!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int num1=(a[1]/min)-1;
        int num2=(a[2]/min)-1;
        if(num1+num2<4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test; cin>>test; 
    while(test--){
        long long n,p,l,t; cin>>n>>p>>l>>t;
        long long nt=0;
        if(n%7==0) nt=n/7;
        else {
            nt=n/7;
            nt++;
        }
        long long lo=1;
        long long hi=1e9+10;
        while(hi-lo>=0){
            long long mid=(lo+hi)/2;
            long long a=0;
            if(l*mid+min(2*mid,nt)*t>=p){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        n=n-lo;
        p=p-lo*l;
        p=p-min(2*lo,nt)*t;
        if(p<=0) cout<<n<<endl;
        else{
            lo=p/l;
            if((lo*l)>=p){
                cout<<n-lo<<endl;
            }else{
                cout<<n-(lo+1)<<endl;
            }

        }
    }
}
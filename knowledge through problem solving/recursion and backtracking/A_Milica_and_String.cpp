#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int last_b_ind=-1;
        int first_b_ind=-1;
        string s; cin>>s;
        int cntA=0,cntB=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                cntA++;
            }
        }
        cntB=n-cntA;
        if((k==0 and cntB==0)or(k==cntB)){
            cout<<0<<endl;
        }
        else if(k==0 and cntB>0){
            cout<<1<<endl;
            cout<<n<<" A"<<endl;
        }
        else if(cntB>k){
            for(int i=n-1;i>=0;i--){
                if(s[i]=='B'){
                    k--;
                }
                if(k==0){
                    last_b_ind=i;
                    break;
                }
            }
            cout<<1<<endl;
            cout<<last_b_ind<<" A"<<endl;
        }
        else if(k>cntB){
            int a=abs(k-cntB);
            for(int i=0;i<n;i++){
                if(s[i]=='A'){
                    a--;
                }
                if(a==0){
                    first_b_ind=i;
                    break;
                }
            }
            cout<<1<<endl;
            cout<<first_b_ind+1<<" B"<<endl;
        }
    }
}
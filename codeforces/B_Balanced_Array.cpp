#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m; cin>>n; 
        m=n;
        m=m/2;
        int cnt=0,cnt1=0,flag;
        if(m%2==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                cnt++;
            }
            for(int i=1; ; i+=2){
                if(cnt1==cnt-1) break;
                cout<<i<<" ";
                cnt1++;
            }
            cout<<2*(cnt)-1+cnt<<endl;
        }
        
        
    }
}
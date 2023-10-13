#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin>>n>>q;
    vector<long long>pre(n),a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<long long>());
    pre[0]=a[0];
    for(int i=1;i<=n-1;i++){
        pre[i]=a[i]+pre[i-1];
        }
    while(q--)
    {
        int x,y;cin>>x>>y;
        // 5 5 3 2 1
        // 5 10 13 15 16
        int r=x-1;
        int l=r-y;// most important line
        long long ans=0;
        if(x==y){
            ans=pre[x-1];
        }
        else{
            ans=pre[r]-pre[l];
        }
        cout<<ans<<endl;      
    }
}
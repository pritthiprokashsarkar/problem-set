#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int>a(n),ans(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool ok=false;
    int l=0,r=0;
    while(r<n){
        while(r<n-1 and a[r]==a[r+1]){
            r++;
        }
            if(l==r)ok=true;
            else{
                ans[l]=r+1;
                for(int i=l+1;i<r+1;i++){
                    ans[i]=i;
                }
            }
            l=r+1;
            r++;
    }
    if(ok)cout<<-1<<endl;
    else{
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
}
int main()
{
    int tt; cin>>tt;
    while(tt--)
    {
        solve();
    }
}
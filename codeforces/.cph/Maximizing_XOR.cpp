#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r; cin>>l>>r;
    int mx=0;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            mx=max(mx,i^j);
        }
    }
    cout<<mx<<endl;
}
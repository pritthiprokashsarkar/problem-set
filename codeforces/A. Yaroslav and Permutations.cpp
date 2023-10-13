#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[1005]={0};
    int i,k=0;
    for(i=0; i<n; i++)
    {
        int x; cin>>x;
        a[x]++;
    }

    for(i=0; i<1005; i++)
    {
        if(a[i]>(n+1)/2)
        {
           k=1;
        }
    }
    if(k==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

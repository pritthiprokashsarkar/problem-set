#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    vector<int>pre(n);


    int i,j,m,x,y,sum=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0) pre[i]=a[i];
        else pre[i]=a[i]+pre[i-1];
    }

    cin>>m;

    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        if(x==0) cout<<pre[y]<<endl;
        else cout<<pre[y]-pre[x-1]<<endl;
    }



}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int d[n];
    int pre[n];
    int i;

    for(i=0;i<n; i++)
    {
        cin>>d[i];
    }

    for(i=0; i<n; i++)
    {
        if(i==0) pre[i]=d[0];
        else pre[i]=pre[i-1]+d[i];
    }

        cout<<pre[b]-pre[a-1]<<endl;

}

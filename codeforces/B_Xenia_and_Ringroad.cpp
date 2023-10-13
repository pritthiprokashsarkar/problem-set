#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    unsigned long long dis=0;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];
    dis+= a[0]-1;
    for(int i=1; i<m; i++)
    {
        if(a[i]>=a[i-1]) dis+=a[i]-a[i-1];
        else dis += (n-a[i-1]) + a[i];
    }
    cout<<dis<<endl;
}
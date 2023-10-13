#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
    cin>>n;

    int a[n],t[n];
    int i;
    for(i=0 ;i<n; i++)
    {
        cin>>a[i];
        t[i]=a[i];

    }
    sort(t,t+n, greater<int>());
    for(i=0 ; i<n ; i++)
    {
        if(a[i]==t[0])
        {
            cout<<a[i]-t[1]<<" ";
            continue;
        }
        cout<<a[i]-t[0]<<" ";
    }
        cout<<"\n";
    }




}

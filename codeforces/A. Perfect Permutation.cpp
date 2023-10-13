#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o;
    cin>>n;
    int i,a[n];
    if(n%2==0)
    {
     for(i=0; i<n; i++)
    {
        if(i%2==0) a[i]=i+2;
        else a[i]=i;
    }
    for(i=0; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    }

    else
    {
    for(i=0; i<n; i++)
    {
        if(i%2==0) a[i]=i+2;
        else a[i]=i;
    }
    for(i=0; i<n ; i++)
    {
        cout<<a[i]<<" ";
        o=a[i];

    }
    cout<<o-1<<endl;
    }

}

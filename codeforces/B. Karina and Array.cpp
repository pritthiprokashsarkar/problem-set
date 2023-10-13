#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int n,p,q;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    p=a[0]*a[1];
    q=a[n-1]*a[n-2];
    if(p>q)cout<<p<<endl;
    else cout<<q<<endl;
    }
}

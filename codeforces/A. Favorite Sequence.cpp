#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>b;
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];
    int s=0; int e=n-1;
    while(s<=e)
    {
        b.push_back(a[s]);
        b.push_back(a[e]);
        s++; e--;
    }
    for(i=0; i<n; i++) cout<<b[i]<<" ";
}

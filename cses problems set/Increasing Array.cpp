#include<bits/stdc++.h>
using namespace std;
const int mx=1e8;
long long a[mx];
void solve(int a[], int n)
{
    long long sum=0;
    long long b=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>b) b=a[i];
        else sum+=(b-a[i]);
    }
    cout<<sum<<endl;
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    solve(a,n);
}

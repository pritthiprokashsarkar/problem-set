#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n)
{
    int sum=0;
    int s=a[0];
    int e=a[n-1];
    while(s<=e)
    {
        sum+=max(s,e);
        s++;
        e--;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    solve(a,n);
}
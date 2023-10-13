#include<bits/stdc++.h>
using namespace std;
void fun(int i, int a[], int n)
{
    if(i>=(n-1)/2) return;
    swap(a[i],a[n-i-1]);
    fun(++i, a, n);
}

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    fun(0, a, n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}

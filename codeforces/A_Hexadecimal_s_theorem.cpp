#include<bits/stdc++.h>
using namespace std;
int mx=1e10;
long long int a[mx];

void solve(int n)
{
    if(n==3) cout<<"1 "<<"1 "<<"1"<<endl;

    a[0]=0;
    a[1]=1;

    for(int i=2; i<n ; i++) a[i] = a[i-2] + a[i-1];

    cout<<a[n-2]<<" "<<a[n-4]<<" "<<a[n-5]<<endl;

}
int main()
{
    int n; cin>>n;
    solve(n);
}
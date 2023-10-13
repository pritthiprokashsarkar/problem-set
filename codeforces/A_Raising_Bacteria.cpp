#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int rem=n%4;
    if(n>4) cout<<rem+1<<endl;
    else cout<<rem<<endl;
}
int main()
{
    int n; cin>>n;
    solve(n);
}
#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int modpower(int x, int n, int m) 
{
    if (n == 0) 
        return 1%m; 
    long long u = modpower(x,n/2,m);  
    u = (u*u)%m;
    if (n%2 == 1) 
        u = (u*x)%m;
    return u;
}
int main(){
    int n; cin>>n;
    cout<<modpower(2,n,mod)<<endl;

}
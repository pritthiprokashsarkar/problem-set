#include<bits/stdc++.h>

const int mx = 2e8+123;
bool vis [mx];

using namespace std;
int solve(int n)
{
    int ans=0;
    for(int i=1; i<=n; i++) vis[ i*i ]=1;
    for(int a = 1;  a <= n;  a++ )
    {
        for(int b = a ; b <= n; b++ )
        {
            long long int d = (a*a) + (b*b);
            if( d >= mx ) break;
            if( vis[d]) ans++;
        }
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;
void solve( int n, int a[], int b[])
{
    double ans=0;
    for( int i=0 ; i <= n-1; i++)
    {
        int m = a[i] -a[i+1];
        int n= b[i]- b[i+1];
        
        ans = max( ans , sqrt( (m*m) + (n*n) ));
    }
    cout << fixed << setprecision(10) << ans << endl;
}
int main()
{
    int n; cin>>n;
    int a[n] , b[n];
    for( int i = 0; i < n ; i++ ) cin >> a[i] >> b[i];

    solve( n , a , b );



    return 0;
}
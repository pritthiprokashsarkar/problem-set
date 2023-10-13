
#include<bits/stdc++.h>
using namespace std;
#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define pb push_back
#define pf push_front
#define endl '\n'
#define nll cout<<'\n'
#define mod 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
typedef long long ll ;
typedef double dl ;

const int inf = 2e9 ;
const ll infLL = 2e18 ;

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



ll gcd ( ll a, ll b )
{
    return __gcd( a, b);
}

ll lcm ( ll a, ll b )
{
    return  a* ( b / gcd( a, b ) ) ;
}
ll fact(int n)
{
    ll gun=1;
    for(int i=1; i<=n; i++)
        gun*=i;
    return gun;
}
ll com(ll n,ll r)
{
    ll ans1=1;
    for(int i=n; i>(n-r); i--)
        ans1*=i;
    ll ans = (ans1)/(fact(r));
    return ans;
}
int main()
{
    optimize();
    fraction();
    int n,m;
    cin>>n>>m;
   // cout<<com(5,2)<<endl;
   if(m==1) cout<<com(n,2)<<" "<<com(n,2)<<endl;
    else
    {
        ll high = com(n-(m-1),2);
        ll low;
        if(n%m==0)
        {
            low = m*com(n/m,2);
        }
        else
        {
            low = (n%m)*com(((n/m)+1),2)+(m-(n%m))*com((n/m),2);
        }
        cout<<low<<" "<<high<<endl;
    }

    return 0;
}

// always make some custom testcases check n==1,0

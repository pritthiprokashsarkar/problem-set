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
typedef long double lld ;

const int inf = 2e9 ;
const ll infLL = 2e18 ;

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



ll gcd ( ll a , ll b ) { return __gcd( a , b); }

ll lcm ( ll a , ll b ) { return  a* ( b / gcd( a , b ) ) ; }

int main()
{
    optimize();
    fraction();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d,h; cin>>n>>d>>h;
        lld ans=0;
        vector<ll>a(n);
        fr(n) cin>>a[i];
        sort(all(a));
        if(n==1) goto start;
        fr(n-1)
        {
            if(a[i+1]-a[i]>=h)
            {
                ans+=(d*(h/2.0));
            }
            else
            {
                lld diff= ( a[i+1]-a[i]);
                lld diff1 = h- diff;
                lld x = (diff1*d)/h;
                ans+=((x+d)*(diff/2.0));
            }
        }
        start:
        ans+=(d*(h/2.0));
        cout<<ans<<endl;
    }

    return 0;
}



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
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

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
	ll xx=0,yy=0,zz=0,flag=0,flag1=0,cnt=0,cnt1=0;
    ll n,q; cin>>n>>q;
    vector<long long>a(n+1),presum(n+1);
    in_range(i,1,n) 
    {
        cin>>a[i];
        if(i==1) 
        {
            presum[i]=a[i];
        }
        else
        {
            presum[i]=a[i]+presum[i-1];
        }
    } 
    while(q--)
    {
        ll l,r,k; cin>>l>>r>>k;
        ll suma = (r-l+1)*k;
        ll subsum = presum[r] - presum[l-1];
        ll totalsum=presum[n]-subsum+suma;
        if(totalsum%2==1) yes;
        else no;
    }
    }
}

// always make some custom testcases check n==1,0

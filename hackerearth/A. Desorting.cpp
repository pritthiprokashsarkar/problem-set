
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



ll gcd ( ll a , ll b ) { return __gcd( a , b); }

ll lcm ( ll a , ll b ) { return  a* ( b / gcd( a , b ) ) ; }
const int m=500+123;
int a[m];
int main()
{
    optimize();
    fraction();
    int t;
    cin>>t;
    while(t--)
    {
        ll mini=LLONG_MAX;
        ll n,diff,key=0; cin>>n;
        fr(n) cin>>a[i];
        for(int i=1; i<n; i++)
        {
            if(a[i]<a[i-1]) key=1;
        }
        if(key==1) cout<<"0"<<endl;
        else
        {
          for(int i=1;i<n; i++)
        {
           diff=a[i]-a[i-1];
           if(mini>diff)
           {
              mini=diff;;
           }
        }
        if(mini<2)
        {
            cout<<"1"<<endl;
        }
        else if(mini==2)
        {
            cout<<"2"<<endl;
        }
        else if(mini>2) cout<<((mini)/2+1)<<endl;

        }
    }

    return 0;
}

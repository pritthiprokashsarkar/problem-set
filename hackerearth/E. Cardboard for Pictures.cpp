
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
const int p=2*1e5+123;
unsigned long long arr[p];
int main()
{
    optimize();
    fraction();
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1;
        unsigned long long int sum1=0,sum2=0,det=0,ans1=0,ans2=0;
        cin>>n>>c1;
        fr(n)
        {
            ll p=arr[i];
           cin>>p;
           sum1+= (p*p);
           sum2+= p;
        }
        det =   sqrt((4*(sum2))*(4*(sum2))-4*(n)*(-c1+sum1));
        ans1= (((-4*sum2)+det)/(8*n));
        ans2 = (((-4*sum2)-det)/(8*n));
        if(ans1>=1)
            cout<<ans1<<endl;
        if(ans2>=1) cout<<ans2<<endl;

    }

    return 0;
}

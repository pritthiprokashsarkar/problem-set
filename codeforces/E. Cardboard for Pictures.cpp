
#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double dl ;
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
        ll c,n;
        cin>>n>>c;
        vector<long long int>v(n);
        for(auto &it : v) cin>>it;

        __int128 low=0,high=1e9 ;

        while(low<=high)
        {
            __int128 mid = low+(high-low)/2;
            __int128 area =0;

            for(auto it :v)
                area += (it+mid*2ll)*1ll*(it+mid*2ll);

            if(area == c)
            {
                cout<<(ll)mid<<endl;
                break;
            }
            else if(area > c)
            {
                high = mid -1 ;
            }
            else
            {
                low = mid + 1;
            }
        }

    }

}

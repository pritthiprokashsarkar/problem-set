#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;
typedef double dl ;

const int inf = 2e9 ;
const ll infLL = 2e18 ;

#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


ll gcd ( ll a, ll b )
{
    return __gcd( a, b);
}

ll lcm ( ll a, ll b )
{
    return  a* ( b / gcd( a, b ) ) ;
}

int main()
{
    optimize();
    fraction();

   int t;
   cin>>t;
   while(t--)
   {
        int n,k,sum=0; cin>>n>>k;
        vector<int>v(n),diff(n-1);
        fr(n) cin>>v[i];
        fr(n-1) diff[i]=abs(v[i+1]-v[i]);
        sort(diff.begin(),diff.end());
        fr(k-1) diff.pop_back();
        fr(diff.size()) sum+=diff[i];
        cout<<sum<<endl;
   }


    return 0;
}



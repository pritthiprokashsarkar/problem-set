#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;
typedef double dl ;

const int inf = 2e9 ;
const ll infLL = 2e18 ;

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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        int it = unique(v.begin(),v.end())-v.begin();
        if( it == k) cout<<"Bad"<<endl;
        else if( it > k) cout<<"Average"<<endl;
        else cout<<"Good"<<endl;

   }


    return 0;
}


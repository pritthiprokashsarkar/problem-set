
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

int main()
{
    optimize();
    fraction();
    int n; cin>>n;
    map<int, multiset<string>>mp;
    for(int i=0; i<n; i++)
    {
        string t; int x; cin>>t>>x;
        mp[(-1)*x].insert(t);
    }
       for( auto it:mp )
       {
           auto it1=it.first;
           auto it2=it.second;
        //second value represents a data structure so
       // we need to use foreach loop
            for(auto it3:it2)
                cout<<it3<<" "<<(-1)*it1<<endl;
       }

    return 0;
}

// always make some custom testcases check n==1,0

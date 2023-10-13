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
    int n; cin>>n;
    unordered_map<string,bool>mp;
    fr(n)
    {
        string s; cin>>s;
        //mp[s]=1 1st time visited included
        if(mp[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        mp[s]=1; // 1st time visit not included
    }
 
    return 0;
}
 
// always make some custom testcases check n==1,0
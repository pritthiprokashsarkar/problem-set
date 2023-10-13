
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
       string s; cin>>s;
       int n; cin>>n;
       map<char,int>m;
       for(int i='a'; i<='z'; i++)
       {
           int a; cin>>a;
            m[i]=a;
       }
       int value=0,last;
       for(int i=0; i<s.size(); i++)
       {
          value+=((i+1)* m[s[i]]);
        // cout<<((i+1)* m[s[i]])<<endl;
          //cout<<value<<endl;
          last=i+1;
       }
       int sz=s.size()+1;
       int sz1=s.size();
       auto pr = max_element(m.begin(), m.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
       int mx=pr->second;
      // cout<<mx<<endl;
       for(int i=sz; i<=(n+sz1); i++)
       {
          value+=(i)*mx;
         // cout<<(i)*mx<<endl;
       //  cout<<value<<endl;
       }
       cout<<value<<endl;


// always make some custom testcases check n==1,0
}

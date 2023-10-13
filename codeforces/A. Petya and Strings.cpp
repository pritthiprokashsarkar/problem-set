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

    string s,t,ss,tt;
    cin>>s>>t;
    for( auto it : s)
    {
        ss +=  tolower(it);
    }
        for( auto it : t)
    {
        tt +=  tolower(it);
    }
    cout<< ss << " " << tt << endl;
    if( ss < tt ) cout<<"-1"<<endl;
    else if( ss == tt ) cout<<"0"<<endl;
    else cout<<"1"<<endl;


    return 0;
}



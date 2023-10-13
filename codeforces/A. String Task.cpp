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
char is_vowel(char c)
{
    return (c == 'a' or c == 'e' or c=='i' or c=='o' or c=='u' or c=='y');
}
int main()
{
    optimize();
    fraction();

   string s, a;
   cin>>s;

   for( auto it : s )
   {
       char c = tolower( it );
       if( ! is_vowel( c ) )
       {
           a+='.';
           a+=c;
       }

   }
   cout << a <<endl;


    return 0;
}



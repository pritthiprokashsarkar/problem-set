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

int isDigitSumPalindrome(int N) {
        int sum=0;
        string s = to_string( N );
        for(int i=0; i<s.length(); i++)
        {
            sum+= (s[i]-'0')+ 0;

        }

        s = to_string (sum);
        string temp =  s;
        reverse( temp.begin(), temp.end());
        if( temp == s ) return 1;
        else return 0;
    }
int main()
{
    optimize();
    fraction();

   int n;
   cin>>n;
   isDigitSumPalindrome(n);

    return 0;
}


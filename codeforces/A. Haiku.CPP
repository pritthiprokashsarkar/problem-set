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
int isvowel(char c)
{
    return ( c == 'a' or c =='e' or c=='i' or c=='u' or c=='o' );
}
int main()
{
    optimize();
    fraction();

    vector<string>v;
    int cnt[]={ 5, 7, 5};

    for( int i=0; i < 3; i++)
    {
        char c;
        cin >> c;
        string s;
        getline( cin , s);
        s = c + s;
        v.push_back(s);
    }

    for(int i=0; i<3; i++)
    {
        int c=0;
        for(auto it : v[i])
        {
            if(isvowel(it)) c++;
        }
        if( cnt[i] != c)
        {
            cout<<"NO\n"<<endl;
            return 0;
        }
        else continue;
    }
    cout<<"YES"<<endl;

    return 0;
}


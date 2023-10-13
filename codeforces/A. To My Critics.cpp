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

bool sortbysec(pair<int,int>&a, pair<int,int>&b)
{
    return (a.second<b.second);
}

int main()
{
    optimize();
    fraction();
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int f;
        int a[n],b[n],c[n];
        vector<pair<int,int>>p;
        fr(n)
        {
            cin>>a[i]>>b[i];
            p.push_back(make_pair(a[i],b[i]));
        }
        sort(p.rbegin(),p.rend(),sortbysec);
        fr(n)
        {
            if(p[i].first<=10)
            {
                f=p[i].second;
                break;
            }
        }
        int x;
        fr(n)
        {
            if(f==b[i]) x=i+1;

        }
        cout<<x<<endl;


    }

    return 0;
}

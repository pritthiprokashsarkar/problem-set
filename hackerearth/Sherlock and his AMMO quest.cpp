
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

void print(vector<pair<string,int>>&m)
{
        for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

bool cmp(pair<string,int>&a, pair<string,int>&b)
{
    if(a.second!=b.second)
    {
        return a.second>b.second;
    }
    else
    {
        return a.first<b.first;
    }
}

void solve(vector<pair<string,int>>&m, int n)
{
    sort(m.begin(),m.end(),cmp);
    print(m);
}

void input()
{
    int n; cin>>n;
    vector<pair<string,int>>m;
    for(int i=0; i<n; i++)
    {
        string s; int x;
        cin>>s>>x;
        m.push_back(make_pair(s,x));
    }
    solve(m,n);
}

int main()
{
    optimize();
    fraction();
    input();

    return 0;
}

// always make some custom testcases check n==1,0


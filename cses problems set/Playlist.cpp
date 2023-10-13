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
	ll xx=0,yy=0,zz=0,flag=0,flag1=0,cnt1=0;
    int n; cin>>n; 
    vector<int>a(n);
    fr(n) cin>>a[i];
    unordered_set<int>s;
    int cnt=0;
    int porindex=0;
    int current_index=0;
    int maxii=0;
    for(int i=0; i<a.size(); )
    {
        flag++;
        if(s.find(a[i])==s.end())
        {
            s.insert(a[i]);
            cnt++;
            if(cnt>maxii) maxii=cnt;
            
            ++i;
        }
        else
        {
            maxii=max(maxii,cnt);
            cnt=0;
            current_index=i;
            int dis = (current_index - porindex);
            porindex++;
            maxii = max ( dis ,maxii);
            ++i;
        }
    }
    cout<<maxii<<endl;

    return 0;
}

// always make some custom testcases check n==1,0
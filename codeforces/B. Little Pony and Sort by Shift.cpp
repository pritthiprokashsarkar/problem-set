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
	ll xx=0,yy=0,zz=0,flag1=0,cnt=0,cnt1=0;
    int x=0;
    bool flag=false;
    int n; cin>>n;
    vector<int>a(n),b(n),c(n),d,e,f;
    fr(n) cin>>a[i];
    b=a;
    sort(all(b));
    if(a==b)
    {
        cout<<"0"<<endl;
    }
    else
    {
        if(n==2) 
        {
            cout<<"1"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(a[i+1]>=a[i])
                {
                    d.pb(a[i]);
                }
                else
                {
                    d.pb(a[i]);
                    xx=i;
                    break;
                }
            }
            for(int i=xx+1; i<n-1; i++)
            {
                if(a[i+1]>=a[i])
                {
                    e.pb(a[i]);
                    cnt++;
                }
                else
                {
                    flag=true;
                }
            }
            e.pb(a[n-1]);
            cnt++;
            fr(e.size()) f.pb(e[i]);
            fr(d.size()) f.pb(d[i]);
            if(f==b) cout<<cnt<<endl;
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}

// always make some custom testcases check n==1,0


/*   
for(int i=1; i<n-1; i++)
            {
            if(a[i-1]<a[i] and a[i]>a[i+1]) flag=true;
            }
            if(flag) 
            {
                cout<<"-1"<<endl;
            }
            else
            {
            c=a;
            reverse(all(c));
            for(int i=n; i>=1; i--)
            {
                if(c[i]<=c[i+1]) c.pop_back();
            }
            c.pop_back();
            cout<<(a.size()-c.size())<<endl;          
            }
        } */

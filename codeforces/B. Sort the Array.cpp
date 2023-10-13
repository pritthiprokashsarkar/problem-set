
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
    int suru, suruind, sesh, seshind;
    int n; cin>>n;
    vector<int>a(n),b(n),c(n);
    fr(n) cin>>a[i];
    b=a;
    c=a;
    reverse(all(c));
    sort(all(b));
    if(b==a)
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
    }
    else if(c==b)
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<a.size()<<endl;
    }
    else
    {
    fr(n)
    {
        if(a[i]!=b[i])
        {
          suru=a[i];
          suruind=i;
          break;
        }
    }
    for(int i=suruind; i<= n; i++)
    {
        if(a[i]==b[i] and a[i+1]==b[i+1])
        {
            sesh=a[i-1];
            seshind=i-1;
            break;
        }
    }
    reverse(a.begin()+suruind, a.begin()+seshind+1);
    fr(n) cout<<a[i]<<" ";
    cout<<endl;
   fr(n) cout<<b[i]<<" ";
    cout<<endl;
    cout<<suruind<<" "<<seshind<<endl;
    if(a!=b) cout<<"no"<<endl;
   else if(a==b)
    {
        cout<<"yes"<<endl;
        cout<<suruind+1<<" "<<seshind+1<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }


    }
    return 0;
}

// always make some custom testcases check n==1,0

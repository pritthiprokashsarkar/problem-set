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

/*
// sorted array er binary search 
void binary_search(vector<int>&a, int element){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int find;cin>>find;
    int lo=0, hi=n-1;
    int mid;
    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(a[mid]<find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(a[lo]==find){
        cout<<lo<<endl;
    }
    else if(a[hi]==find){
        cout<<hi<<endl;
    }
    else {
        cout<<"no found"<<endl;
    }
}
*/

int main()
{
    optimize();
    fraction();
    int t;
    cin>>t;
    while(t--)
    {
	ll xx=0,yy=0,zz=0,flag=0,flag1=0,cnt=0,cnt1=0;
    ll n; cin>>n;
    if(n==1 or n==2 or n==3 or n==4 or n==5 or n==6 or n==9){
        no;
    }
    else{
        yes;
        xx=n-3;
        if(xx%3!=0){
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }
        else{
            cout<<1<<" "<<4<<" "<<n-5<<endl;
        }
    }
    }

    return 0;
}

// always make some custom testcases check n==1,0

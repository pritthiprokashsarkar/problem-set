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
	ll xx=0,yy=0,zz=0,flag=0,flag1=0,cnt=0,cnt1=0;
    ll maxi=-1,min=INT_MAX;
    ll max_id,min_id;
    vector<string>a(4);
    vector<int>aa(4);
    fr(4) 
    {
        cin>>a[i];
        aa[i]=a[i].size()-2;
        if(aa[i]>maxi)
        {
            maxi=aa[i];
            max_id=i;
        } 
        if(aa[i]<min)
        {
            min=aa[i];
            min_id=i;
        }
    }
    ll mx = *max_element(all(aa));
    ll mini = *min_element(all(aa));
    
    fr(4) 
    {
        if(mx/2>=aa[i]) cnt++;
        if(mini*2<=aa[i]) cnt1++;
    }
    if(cnt >= 3 and cnt1!=3)
    {
        cout<< (char)('A'+ max_id ) <<endl;
    }
    else if ( cnt1 >= 3 and cnt!=3)
    {
        cout<< (char)('A'+ min_id ) <<endl;
    }
    else
    {
        cout<<"C"<<endl;
    }
    /* cout<<max_id<<" "<<min_id<<endl;
    cout<<cnt<<" "<<cnt1<<endl;
    fr(4) cout<<aa[i]<<" ";
    cout<<endl; */

    return 0;
}

// always make some custom testcases check n==1,0
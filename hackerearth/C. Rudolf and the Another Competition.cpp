#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;
typedef double dl ;

const int inf = 2e9 ;
const ll infLL = 2e18 ;

#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
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

int main()
{
    optimize();
    fraction();

   int t;
   cin>>t;
   while(t--)
   {
      int n,m,h,key=1,Rpe=0, Rpro=0,ans=1;
      vector<int>a ;
      cin>>n>>m>>h;
      int aa[n][m];
      fr(n)
      {
          frj(m)
          {
              cin>>aa[i][j];
          }
      }
      fr(n)
      {
          frj(m)
          {
                a.push_back(aa[i][j]);
          }
          int pe=0 ,pro=0 ;
          sort(a.begin(),a.end());
        frj(m)
        {
        if(j=0)
          {
              a[j]=a[j];
          }
          else
          {
              a[j]= a[j]+a[j-1];
          }
        }
        int sum=0;
          frj(m)
          {
              if(a[j]<=h)
              {
                sum += a[j];
              }
              else
              {
                pe = sum ;
                pro = j-1 ;

              }
          }
          if(key==1)
          {
            Rpe = sum ;
            Rpro = pro ;
            key =0 ;

          }
          if(pro > Rpro )
          {
              ans++;
          }
          else if( pro = Rpro)
          {
              if(Rpe > pe)
              {
                  ans++;
              }
          }
      cout<<ans<<endl;
      }

   }


    return 0;
}



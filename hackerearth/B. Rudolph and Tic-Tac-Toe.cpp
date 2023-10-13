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
        char a [3][3];
        char aaa;
        char bbb;
        char ccc;
        int aa=0, bb = 0;
        int key=1;
        int c = 0;
        fr(3)
        {
            frj(3)
            {
                cin>>a[i][j];
            }
        }

        fr(3)
        {
            char x = a[0][i];
            int c=0;
            frj(3)
            {
                if(a[i][j]== x and x != '.' and key==1)
                {
                    c++;
                }
            }
            if(c == 3 )
            {
                aaa= x;
                key=0;
                if(key == 0 and c==3)
                {
                    cout<<aaa<<endl;
                }
            }

            else continue;
        }

        frj(3)
        {
            char x = a[j][0];
            int c=0;
            fr(3)
            {
                if(a[i][j]== x and x != '.' and key==1)
                {
                    c++;
                }
            }
            if(c == 3 )
            {
                aaa= x;
                key=0;
                if(key == 0 and c==3)
                {
                    cout<<aaa<<endl;
                }
            }

            else continue;
        }

        fr(3)
        {
            char x = a[0][0];
            frj(3)
            {
                if(i==j )
                {
                    if(x == a[i][j] and x !='.' and key==1)
                    {
                        c++;
                    }
                }
            }
            if(c==3)
            {
                aaa = x ;
                key = 0 ;
                if(key == 0 and c==3)
                {
                    cout<<aaa<<endl;
                }
            }
        }
        fr(3)
        {
            char x = a[0][2];
            frj(3)
            {
                if(i+j == 2)
                {
                    if(x == a[i][j] and x !='.' and key==1)
                    {
                        c++;
                    }
                }
            }
            if(c==3)
            {
                aaa = x ;
                key = 0 ;
                if(key == 0 and c==3)
                {
                    cout<<aaa<<endl;
                }
            }
        }

        if(key==1) cout<<"DRAW"<<endl;







    }


    return 0;
}




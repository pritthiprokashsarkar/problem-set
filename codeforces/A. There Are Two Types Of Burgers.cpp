#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int cost=0;
    int b , p , f;
    cin>>b>>p>>f;
    int h , c ;
    cin>>h>>c;
    if( h >= c )
        {
            if((b/2)>p)
            {
            cost+=p*h;
            b = b-2*p;
            if(b/2>=f)
            {
                cost+=f*c;
            }
            else
            {
                if( b/2 >= 0 )
                {
                  cost+=(b/2)*c;
                }
                else cost+=0;

            }
            }
            else
            {
                cost+=(b/2)*h;
            }
        }
        else
        {
            if(b/2>f)
            {
            cost+=f*c;
            b = b - (2*f);
            if( b/2 >= p )
            {
                cost+=p*h;
            }
            else
            {
                if( b/2 >= 0 )
                {
                  cost+=(b/2)*h;
                }
                else cost+=0;
            }
            }
            else
            {
                cost+=(b/2)*c;
            }
        }
    cout<<cost<<endl;
    }

    }


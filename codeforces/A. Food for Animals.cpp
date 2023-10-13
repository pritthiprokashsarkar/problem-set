#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,x,y,d;
    cin>>a>>b>>c>>x>>y;

    if(a-x>=0 && b-y>=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(a-x<0)
        {
            d=a-x+c;
            if(d>=0 && b-y+d>=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

        else
        {
            if(b-y+c>=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    }

}

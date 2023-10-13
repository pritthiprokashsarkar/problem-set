#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,rem,d;
    cin>>n;

    if(n>0)
    {
         rem=n%10;
        if(rem<8)
        {
            d=8-rem;
        }
        else if(rem>=8)
        {
            d=10-rem;
            d+=10;
        }
        cout<<d<<endl;
    }


    else
    {
        n=(-1)*n;
        rem=n%10;
        if(rem>8)
        {
            d=rem-8;
        }
        else d = 8-rem;

        cout<<d<<endl;
    }
}

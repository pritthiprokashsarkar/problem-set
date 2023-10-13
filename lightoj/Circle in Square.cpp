#include<bits/stdc++.h>
using namespace std;
const double pi = 2*acos(0.0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(2); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    fraction();
    int tc; cin>>tc;
    for(int i=1; i<=tc; i++)
    {
       double r ; cin>>r;
    double sqarea= 4*r*r;
    double cirarea = pi*r*r;
    cout<<"case "<<i<<": "<<sqarea-cirarea<<endl; 
    }
}
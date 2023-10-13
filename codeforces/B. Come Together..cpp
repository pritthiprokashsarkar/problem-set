#include<bits/stdc++.h>
using namespace std;
long long distance(long long x,long long y,long long z)
{
    if(y>= x and z>=x)
    {
        return min( y-x , z-x);
    }
    if(x >= y  and x >= z)
    {
        return min( x-y , x-z );
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long xa, ya;
    cin>>xa>>ya;
    long long xb,yb;
    cin>>xb>>yb;
    long long xc, yc;
    cin>>xc>>yc;
    int dist = distance(xa,xb,xc) + distance(ya,yb,yc);
    dist++;
    cout<<dist<<endl;

}
}

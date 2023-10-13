#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    }
    long long int n,a,b,c,d,x1,x2,y1,y2;
    cin>>n>>a>>b>>c>>d;

    if(a+b<c+d)
    {
        x1=a;
        x2=b;
        y1=b;
        y2=d;
    }

    long long k=n-x1+1;

    long long int dis1=abs(x2-x1);
    long long int dis2=abs(y2-k);
    if(dis1<dis2) cout<<dis1<<endl;
    else cout<<dis2<<endl;


}

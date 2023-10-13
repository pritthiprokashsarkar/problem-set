#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
    int r1,r2,c1,c2;
    cin>>r1>>r2>>c1>>c2;
    int sum1=abs(r1-r2);
    int sum2=abs(c1-c2);

    if(sum1==sum2) cout<<"Case "<<i+1<<":"<<" 1"<<endl;
    else
    {
        if(sum1%2==0 and sum2%2==0 or sum1%2==1 and sum2%2==1 ) cout<<"Case "<<i+1<<":"<<" 2"<<endl;
        else cout<<"Case "<<i+1<<":"<<" impossible"<<endl;
    }
    }

}

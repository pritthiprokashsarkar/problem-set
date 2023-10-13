#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,n;
    int c=0,d=0;
    cin>>n;
    while(1)
    {
    x=n;
    if(x<0) x=x*(-1);

    while(x>0)
    {
        int rem=x%10;
        if(rem==8) c=1;
        x=x/10;
    }

    if(c==1 and d!=0) break;
    d++;
    n++;
    c=0;
    }
    cout<<d<<endl;



}

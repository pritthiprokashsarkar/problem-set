#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==1) return 1;
    if(n%2==0) return 1+fun(n/2);
    else return 1+fun(3*n+1);
}
int main()
{
    int a,b,i,j;
    while(cin>>a>>b)
    {
    if(a>b)
    {
        i=b;
        j=a;
    }
    else
    {
        i=a;
        j=b;
    }
        int maxi=0;
        for( int k=i; k<=j; k++)
        {
            maxi=max(maxi,fun(k));
        }
        cout<<a<<" "<<b<<" "<<maxi<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[25];
    int cnt=0;
    long long n; cin>>n;
    while(n)
    {
        a[cnt++]=n%10;
        n=n/10;
    }
    for(int i=0,j=cnt-1; i<j; i++, j--)
    {
        int temp= a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    int tem = a[0];

    for(int i=0; i<cnt; i++)
    {
        int te = 9 - a[i];
        if( te < a[i])
        {
            a[i]= te;
        }
    }
    if(a[0]==0) a[0]=tem;
    for(int i=0; i<cnt; i++) cout<<a[i];
    cout<<endl;
}

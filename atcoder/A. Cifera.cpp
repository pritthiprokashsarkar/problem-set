#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,p,d=0;
    cin>>a>>b;

    int i;
    for(i=1; i<=b; i++)
    {

        if(pow(a,i)==b)
        {
           p=i;
           d=1;

        }
        if(pow(a,i)>b)
        {
           break;
        }
    }
    if(d==1){cout<<"YES"<<endl; cout<<p-1<<endl;}
    else cout<<"NO"<<endl;
}

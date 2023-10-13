#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a[10],sum1=0,sum2=0,i;
    for(i=0; i<10; i++)
    {
        cin>>a[i];
        if(i%2==0) sum1+=a[i];
        else sum2+=a[i];
    }
    if(sum1>sum2) cout<<"1"<<endl;
    else if(sum2>sum1) cout<<"2"<<endl;
    else cout<<"0"<<endl;
    }

}

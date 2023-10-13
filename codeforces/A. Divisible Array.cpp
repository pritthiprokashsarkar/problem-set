#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,sum=0,p=2;
    cin>>n;
    int a[n];
    for(i=1; i<n; i++)
    {
        a[i]=p;
        p++;
        sum+=a[i];
    }
    int q=sum/n;
    q++;
    q*=n;
    q=q-sum;
    a[0]=q;

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }

}

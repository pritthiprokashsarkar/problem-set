#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
    int n,m=0,b=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0) m+=a[i];
        if(a[i]%2==1) b+=a[i];
    }
    if(m>b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}

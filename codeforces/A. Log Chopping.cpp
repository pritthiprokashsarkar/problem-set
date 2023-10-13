#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,sum=0;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]=a[i]-1;
        sum+=a[i];
    }

    if(sum%2==1)
        cout<<"errorgorn"<<endl;
    else
        cout<<"maomao90"<<endl;
    }


}

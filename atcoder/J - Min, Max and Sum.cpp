#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;

    int a[n];

    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);

    cout<<a[0]<<" "<<a[n-1]<<" "<<sum<<endl;


}

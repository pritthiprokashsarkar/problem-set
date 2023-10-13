#include<bits/stdc++.h>
using namespace std;
const int MAX_N =1000;
int main()
{
    int n;
    cin>>n;

    int a[MAX_N];

    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
        for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    while(a[0]!= a[n-1] )
    {
        for(i=1; i<n; i++)
        {
            a[i]=a[i]-a[i-1];
        }
        a[0]=a[0];

            sort(a,a+n);
        }

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

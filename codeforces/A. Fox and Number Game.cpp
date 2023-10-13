#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];

    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    while(a[0]!=a[n-1])
    {
        for(i=1; i<n; i++)
        {
            if(a[i]==a[0]) continue;
            else a[i]=a[i]-a[0];
        }
        sort(a,a+n);
    }
cout<<a[i]<<endl;
}

// sorting of an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0 ; j<n-1; j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    int sum=0;
    for(i=0; i<2; i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    }

}


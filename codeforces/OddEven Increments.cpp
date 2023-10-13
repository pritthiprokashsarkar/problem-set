#include<bits/stdc++.h>
using namespace std;
int main()

{
    bool x;
    int n,i,even_count=0,odd_count=0;
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(a[0]%2==0)
    {
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even_count++;
        }
        else if(a[i]%2==1)
        {
            odd_count++;
        }
    }
    }
    else if(a[0]%2==1)
    {
    for(i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            odd_count++;
        }
        else if(a[i]%2==0)
        {
            even_count++;
        }
    }
    }

    if(a[0]%2==1 and odd_count==n/2)
    {
        cout<<"YES"<<endl;
    }
    else if(a[0]%2==0 and even_count==n/2)
    {
        cout<<"NO"<<endl;
    }

}

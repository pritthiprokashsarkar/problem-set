#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,even_count=0,odd_count=0;
    cin>>n;

    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even_count++;
        else
            odd_count++;
    }

    if(n%2==0 and even_count==n/2 and odd_count==n/2 or even_count==n or odd_count==n )
        cout<<"YES"<<endl;
    else if(n%2==1 and even_count+1==odd_count or odd_count+1==even_count)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }


}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,size1=0;
    cin>>n;
    int x=n;
    while(n>0)
    {
        int rem=n%10;
        size1++;
        n=n/10;

    }
    n=x;
    int a[size1];
    int i=1;
    while(n>0)
    {
        int rem=n%10;
        a[size1-i]=rem;
        n=n/10;
        i++;
    }
    int count1=0;
    for(i=0; i<size1; i++)
    {
        if(a[i]>0)
        {
            count1++;
        }
    }
    cout<<count1<<endl;
    for(i=0; i<size1; i++)
    {
        if(a[i]>0)
        {

            cout<<a[i]*pow(10,size1-1-i)<<" ";
        }
    }
    cout<<"\n";
    }




}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,sum=0,max1=-1,count1=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(max1<a[i])
        {
        max1=a[i];
        }
    }
    //cout<<sum<<" "<<max1<<endl;
    int rem=sum%n;
    int div=sum/n;
    if(rem==0)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]>div)
                count1++;
        }
        cout<<count1<<endl;
    }

    else
    {
        cout<<"-1"<<endl;
    }
    }


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,max1=-1,sum=0;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(max1<a[i])
        {
            max1=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        //difference
        sum+=(max1-a[i]);
    }
    cout<<sum<<endl;
}

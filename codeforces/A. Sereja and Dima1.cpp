#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,i; cin>>n;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];
    int s=0; int e=n-1;
    while(s<e)
    {
        if(a[s]<a[e])
        {
            sum1+=a[e];
            e--;
        }
        else
        {
            sum1+=a[s];
            s++;
        }

        if(a[s]<a[e])
        {
            sum2+=a[e];
            e--;
        }
        else
        {
            sum2+=a[s];
            s++;
        }
    }
    if(n%2==1) sum1+=a[s];
    cout<<sum1<<" "<<sum2<<endl;
}

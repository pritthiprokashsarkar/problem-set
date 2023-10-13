#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,count1=0,count2=0;
    cin>>n;

    int a[n];

    int i;
    for(i=0; i<n; i++)
    {
      cin>>a[i];
      if(a[i]==1)
            count1++;
      else
            count2++;
      sum+=a[i];
    }

    if(sum%2==1)
        cout<<"NO"<<endl;
    else
    {
       if(count1%2==0 and count2%2==0)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;

    }
    }

}

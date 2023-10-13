#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,count1=0,count2=0,sum1=0,sum2=0;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
      cin>>a[i];
      if(a[i]==1)
            {count1++;sum1++;}
      else
            {count2++;sum2+=2;}
    }

    if(count1>0 and count2>0){
    {
        if(count1%2==0 and count2%2==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    if(count1==0)
    {
        if(count2%2==0 and sum2%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    if(count2==0)
    {
        if(count1%2==0 and sum1%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

    }
    }




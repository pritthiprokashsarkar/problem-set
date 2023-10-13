
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,count1=0,count2=0,c=0,g=0;
    cin>>n;

    int a[n];

    int i;
    for(i=0; i<n; i++)
    {
      cin>>a[i];
      if(a[i]==1)
            {count1+=1;c++;}
      else
            {count2+=2;g++;}
    }

    if(count1>0 and count2>0){
       if(count1%2==0 and count2%2==0)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;}
        if(count1==0)
        {
            if(count2%2==0 and g%2==0)
            cout<<"YES"<<endl;
            else
        cout<<"NO"<<endl;
        }
        if(count2==0)
        {
            if(count1%2==0 and c%2==0)
            cout<<"YES"<<endl;
            else
        cout<<"NO"<<endl;
        }

    }
    }

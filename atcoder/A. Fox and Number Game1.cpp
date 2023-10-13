#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }


    start:
    sort(a.begin(),a.end());
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    {
        for(i=0; i<n; i++)
        {
           // cout<<a[0]<<endl;
            if(i==0) a[i]=a[i];
            else a[i+1]=a[i]-a[i-1];
        }
       // sort(a.begin()+1,a.end());
      //  if(a[0] != a[n]) goto start;
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

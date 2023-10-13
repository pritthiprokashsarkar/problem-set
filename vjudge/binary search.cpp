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
    sort(a.begin(),a.end());

    int j=-1;

    int s=0;
    int e=n-1;

    int key;
    cin>>key;

    while(s<=e)
    {
    int mid=s+(e-s)/2;
       if(key==a[mid])
       {
           j=mid;
           break;
       }
       else if( key<a[mid])
       {
           e=mid-1;
       }
       else if(key>a[mid])
       {
           s=mid+1;
       }
    }

    if(j!=-1)
    {
        cout<<"element found at"<<" "<<j+1<<"index"<<endl;
    }
    else
        cout<<"element doesnt exist"<<endl;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,v,i,j,z,x,p=0;
    cin>>n>>v;
    int a[n];

    int min1=v,count1=0;

    for(i=0; i<n; i++)
    {
        cin>>z;
        for(j=0; j<z; j++)
        {
            cin>>x;
            if(min1>x)
            {
                min1=x;
            }
        }
        if(min1<v)
        {
            a[p]=i+1;
            p++;
            count1++;
            cout<<"Y";

        }
        min1=v;
    }
    cout<<count1<<endl;
    if(count1!=0){
    for(i=0; i<p; i++)
    {
        cout<<a[i]<<" ";
    }
    }
}

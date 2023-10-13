#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,i,j,x,p=0;
    cin>>n>>v;

    int small=v,counter=0;

    int a[n];

    for( i=0; i<n; i++)
    {
        int z;
        cin>>z;
        for(j=0; j<z; j++)
        {
            cin>>x;
            if(small>x)
            {
                small=x;
                //break;
            }

        }
            if(small<v)
            {
                a[p]=i+1;
                p++;
                counter++;
                cout<<"y";
            }
            small=v;
    }
    cout<<counter<<endl;
    for(i=0; i<p; i++) cout<<a[i]<<" ";
    if(counter!=0)
    {
       // for(i=0; i<p; i++) cout<<a[i]<<" ";
    }



}

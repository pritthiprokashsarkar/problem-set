
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m=0,o=0,i;
    cin>>n;
    int arr1[n],arr2[n];

    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        arr1[i]=a;
        arr2[i]=b;

    }

    for(i=0; i<n; i++)
    {
        if(arr1[i]<arr2[i])
        {
        m=arr1[i];
        o=arr2[i];
        break;
        }

    }
    cout<<m<<" "<<o;

        for(i=0; i<n; i++)
    {
        if(m<arr1[i] and o>arr2[i])
        {
                cout<<"Happy Alex"<<endl;
                return 0;
        }

    }
    cout<<"Poor Alex"<<endl;
}

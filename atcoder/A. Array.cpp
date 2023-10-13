#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,neg=0,pos=0,zero=0,p;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(i=0; i<n; i++)\
    {
        if(a[i]<0) neg++;
        else if(a[i]>0) pos++;
        else {
            zero++;
            p=i;

        }
    }
   // cout<<pos<<endl;
   // cout<<neg<<endl;
   // cout<<zero<<endl;

    if(pos==0)
    {
        if(neg%2==1)
        {
            cout<<"1"<<" "<<a[0]<<endl;

        cout<<neg-1<<" ";
        for(i=1; i<p; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<zero<<" "<<"0"<<endl;
        }
        if(neg%2==0)
        {
           // cout<<"y";
            cout<<"1"<<" "<<a[0]<<endl;
            cout<<neg-2<<" ";
            for(i=1; i<p-1; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            cout<<"2"<<" "<<a[p-1]<<" "<<"0"<<endl;
        }
    }

    else
    {
        if(neg%2==1)
        {
        cout<<neg<<" ";
        for(i=0; i<p; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        cout<<pos<<" ";
        for(i=p+1; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<zero<<" "<<"0"<<endl;
        }
        else
        {
           cout<<neg-1<<" "<<endl;
           for(i=0; i<p-1; i++)
           {
               cout<<a[i]<<" ";
           }
           cout<<endl;

           cout<<pos<<" ";
           for(i=p+1; i<n; i++)
           {
               cout<<a[i]<<" ";
           }
           cout<<endl;
           cout<<"2"<<" "<<a[p]<<" "<<a[p-1]<<" ";

        }

    }
}

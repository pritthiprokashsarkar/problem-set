#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,even_count=0, odd_count=0;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    if(a[0]%2==0)
    {
        for(i=0; i<n; i++)
        {
           if(a[i]%2==0)
                even_count++;
           else
                odd_count++;
        }
    }


    if(a[0]%2==1)
    {
        for(i=0; i<n; i++)
        {
           if(a[i]%2==1)
                odd_count++;
           else
                even_count++;
        }
    }
    cout<<even_count<<" "<<odd_count<<endl;
    if(even_count==n or odd_count==n)
    {
        cout<<"YES"<<endl;
    }

    else if(n%2==1 and a[0]%2==0 and even_count==(n/2)+1 and odd_count==(n/2) or n%2==1 and a[0]%2==1 and odd_count==(n/2)+1 and odd_count==n/2)
    {
        cout<<"YES"<<endl;
    }

    else if(n%2==0 and a[0]%2==0 and even_count==(n/2) and odd_count==n/2 or n%2==0 and a[0]%2==1 and odd_count==(n/2) and even_count==n/2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,sum1=0,sum2=0;
    cin>>n;

    int a[100];
    int b[100];

    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];

        if((a[i]%2==0 and b[i]%2==1) or(a[i]%2==1 and b[i]%2==0))
        {
            p=1;
        }

        sum1+=a[i];
        sum2+=b[i];
    }
   // cout<<sum1<<endl;
   // cout<<sum2<<endl;
   // cout<<p<<endl;

    if(sum1%2==0 and sum2%2==0)
    {
        cout<<"0"<<endl;
        return 0;
    }

    else if(sum1%2==1 and sum2%2==1 and p==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    if((sum1%2==0 and sum2%2==1 or sum1%2==1 and sum2%2==0) or (sum1%2==1 and sum2%2==1 and p==0))
    {
        cout<<"-1"<<endl;
    }

    }

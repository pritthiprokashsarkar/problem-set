#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
    int i,j,m,n,total; cin>>i>>j;
    if(i==2 and j==2)
    {
        cout<<"Case "<<k+1<<": "<<"4"<<endl;
    }
    else if((i==2 and j==3) or (j==2 and i==2))
    {
        cout<<"Case "<<k+1<<": "<<"4"<<endl;
    }
    else if(i==1 or j==1)
    {
        cout<<max(i,j)<<endl;
    }
    else if(i%2==1 and j%2==1)
    {
        m=i;
        n=j;
        total=(n/2+1)*(m/2+1)+(m/2)*(n/2);
    }
    else if(i%2 != j%2)
    {
        if(i%2==1)
        {
            m=i;
            n=j;
        }
        else
        {
            m=j;
            n=i;
        }
        total=(m/2+1)*(n/2)+(m/2)*(n/2);
    }
    else if(i%2==0 and j%2==0)
    {
        m=i; n=j;
        total=(m*n+1)/2;
    }
        cout<<"Case "<<k+1<<": "<<total<<endl;
    }


}

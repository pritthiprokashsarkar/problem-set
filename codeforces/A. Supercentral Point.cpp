#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n,a,b,i,c=0,d=0,c1=0,c2=0,c3=0,c4=0,counter=0,j;
    cin>>n;
    int x[n],y[n];

    for(i=0; i<n; i++)
    {
        cin>>a;
        cin>>b;
        x[i]=a;
        y[i]=b;

    }

    for(i=0; i<n; i++)
    {
        c=x[i];
        d=y[i];

        for(j=0; j<n; j++)
        {
            if(x[j]>c and y[j]==d) c1++;
            if(x[j]<c and y[j]==d) c2++;
            if(x[j]==c and y[j]>d) c3++;
            if(x[j]==c and y[j]<d) c4++;

        }
        if(c1>=1 and c2>=1 and c3>=1 and c4>=1) counter++;
        c1=0,c2=0,c3=0,c4=0;

    }
    cout<<counter<<endl;
}

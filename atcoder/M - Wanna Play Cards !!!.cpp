#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    int s[100]={0};
    int d[100]={0};
    int c[100]={0};
    int h[100]={0};
    char p;
    cin>>x;

    for(i=0; i<x; i++)
    {
        cin>>p>>n;
        if(p=='S')
        {
            s[n]++;
        }
            else if(p=='H')
        {
            h[n]++;
        }
            else if(p=='C')
        {
            c[n]++;
        }
            else if(p=='D')
        {
            d[n]++;
        }

    }

    for(i=1; i<=13; i++)
    {
        if(s[i]==0)
            cout<<"S"<<" "<<i<<endl;
    }
        for(i=1; i<=13; i++)
    {
        if(h[i]==0)
            cout<<"H"<<" "<<i<<endl;
    }
        for(i=1; i<=13; i++)
    {
        if(c[i]==0)
            cout<<"C"<<" "<<i<<endl;
    }
        for(i=1; i<=13; i++)
    {
        if(d[i]==0)
            cout<<"D"<<" "<<i<<endl;
    }
}

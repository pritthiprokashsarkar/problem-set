#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,b=0,i;

    cin>>n;
    vector<int>a;
    start:
    if(n>=500)
    {
        b=n/500;
        n=n%500;
        for(i=0; i<b; i++)
        {
            a.push_back(500);
        }
        goto start;
    }
    if(n>=100 and n<500)
    {
        b=n/100;
        n=n%100;
        for(i=0; i<b; i++)
        {
            a.push_back(100);
        }
        goto start;
    }
    if(n>=50 and n<100)
    {
        b=n/50;
        n=n%50;
        for(i=0; i<b; i++)
        {
            a.push_back(50);
        }
        goto start;
    }
    if(n>=10 and n<50)
    {
        b=n/10;
        n=n%10;
        for(i=0; i<b; i++)
        {
            a.push_back(10);
        }
        goto start;
    }
    if(n>=5 and n<10)
    {
        b=n/5;
        n=n%5;
        for(i=0; i<b; i++)
        {
            a.push_back(5);
        }
        goto start;
    }
    if(n<5)
    {
        for(i=0; i<n; i++)
        {
            a.push_back(1);
        }
    }
    reverse(a.begin(),a.end());
    for(i=0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}

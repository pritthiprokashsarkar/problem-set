#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int count1=0,mint=0;


    while(n--)
    {
    int l,r;
    cin>>l>>r;

    while(!(count1>=l))
    {
        count1+=x;
    }

    count1-=x;
    mint=mint+r-count1;
    count1=r;

    }
    cout<<mint;



}

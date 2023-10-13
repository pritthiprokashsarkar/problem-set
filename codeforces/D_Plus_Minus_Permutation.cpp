#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,xdivisornum,ydivisornum; cin>>n>>x>>y;
    vector<int>xdivisor,ydivisor,cdivisor;
    xdivisornum = n/x;
    ydivisornum = n/y;
    for(long long i=1; i<=n; i++)
    {
        if(i%x==0) xdivisor.push_back(i);
        if(i%y==0) ydivisor.push_back(i);
        if(i%x==0 and i%y==0) cdivisor.push_back(i);
    }
    cout<<"xdivisorvector"<<endl;
    for(auto it : xdivisor) cout<<it<<" ";
    cout<<endl;
    cout<<"ydivisorvector"<<endl;
    for(auto it : ydivisor) cout<<it<<" ";
    cout<<endl;\
    cout<<"cdivisorvector"<<endl;
    for(auto it : cdivisor) cout<<it<<" ";
    cout<<endl;
    long long xsum=(n*(n+1))/2 - ((n-xdivisornum)*(n-xdivisornum+1))/2;
    cout<<"xsum  "<<xsum<<endl;
    long long cdivsum=0;
    long long j=n-(xdivisor.size()-cdivisor.size())  ;
    cout<<" j"<<j<<endl;
    long long cnt =0;
    long long size = cdivisor.size();
    while(size--)
    {
        cdivsum+=j;
        j--;
    }
    cout<<"cdivsum "<<cdivsum<<endl;
   /*  while
    for(int i=n; i>=cdivisor.size(); i++)
    {
        cdivsum+=i;
    } */
    cout<<"cdivsum "<<cdivsum<<endl;
    long long exsize = ydivisornum - cdivisor.size();
    cout<<"exsize "<<exsize<<endl;
    cdivsum= cdivsum + ((exsize*(exsize+1))/2);
    cout<<xsum-cdivsum<<endl;
}
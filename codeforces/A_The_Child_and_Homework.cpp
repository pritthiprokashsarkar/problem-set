#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx=-1,min=INT_MAX,p=0,q=0;
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int sza=a.size()-2;
    int szb=b.size()-2;
    int szc=c.size()-2;
    int szd=d.size()-2;
    vector<int>x;
    x.push_back(sza);
    x.push_back(szb);
    x.push_back(szc);
    x.push_back(szd);
    for(int i=0; i<4; i++)
    {
        if(mx>x[i])
        {
            mx=x[i];
            p=i;
        }
        if(min<x[i])
        {
            min=x[i];
            q=i;
        }
    }
    int sum1=sza+szb+szc+szd-mx;
    sum1/=3;
    int sum2=sza+szb+szc+szd-min;
    sum2/=3;
    if(mx>sum1) cout<<(p+'A')<<endl;
    else if(min<sum2) cout<<(q+'A')<<endl;
    else cout<<"C"<<endl;
}
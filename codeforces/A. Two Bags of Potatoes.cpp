#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int y,k,n,x=0,l;
    cin>>y>>k>>n;
    vector<int>a;
    for(int i=1;y+i<=n;i++)
    {
        if((y+i)%k==0)
        l=y+i;
        break;
    }
    for(int i=l; i<=n; i+=k)
    {
        a.push_back(i-y);
    }
    if(!a.empty())
    {
        for(auto u:a) cout<<u<<" ";
        cout<<endl;
    }
    else
    cout<<"-1"<<endl;

}

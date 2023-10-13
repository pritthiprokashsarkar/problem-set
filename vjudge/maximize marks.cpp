#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t; cin>>n>>t;
    vector<int>mark(n);
    vector<int>time(n);
    for(int i=0; i<n; i++) cin>>mark[i];
    for(int i=0; i<n; i++) cin>>time[i];
    vector<pair<int,int>>a;
    for(int i=0; i<n; i++)
    {
        a.push_back({mark[i],time[i]});
    }
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    int times = 0 ;
    int marks =0;
    for(int i=0; i<n; i++)
    {
        
        times+=a[i].second;
        if(times>t) break;
        if(i==0) marks+=(a[0].first*2);
        else marks+=a[i].first;
    }
    cout<<marks<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;

    vector<pair<long long,long long>>a;
    long long temp=0;
    int i;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        a.push_back({temp,i});
    }

    sort(a.begin(),a.end());

    long long s=0,e=n-1;

    while(s<e)
    {
        temp=a[s].first+a[e].first;
        if(temp==x)
        {
            cout<<a[e].second+1<<" "<<a[s].second+1<<endl;
            return 0;
        }
        else if(temp<x) s++;
        else e--;

    }
    cout<<"-1"<<endl;
    return 0;
}

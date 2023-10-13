#include<bits/stdc++.h>
using namespace std;
#define fr(m) for(int i=0; i<m; i++)
#define all(v) v.begin(), v.end()
typedef long long ll ;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    ll cnt=0,sum1=0, n,k; cin>>n>>k;
    vector<int>a(n),a1(n),sum(n);
    fr(n) 
    {
        cin>>a[i];
        sum1+=a[i];
        a1[i]=a[i]+k;
    }
    fr(n)
    {
        sum[i]=sum1-a[i];
        if(a1[i]>sum[i]) cnt++;
    }
    cout<<cnt<<endl;
    }
}
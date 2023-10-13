#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m; cin>>n>>m;
        vector<int>a(n);
        for(int i=0; i<n; ++i) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        long long ans=0;
        if(n>m) cout<<"NO"<<endl;
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(i==0) ans+=1+a[i]*2;
                else
                {
                    ans+=(a[i]+1);
                }
            }
            ans++;
            if(ans>m) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
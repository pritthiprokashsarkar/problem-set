#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc; 
    while(tc--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        map<int,int>mp;
        bool ans=0;
        for(int i=0; i<n-1; i++)
        {
            int d = a[i+1] - a[i];
            mp[d]++;
            if(d>3)
            {
                ans=1;
                break;
            }
        }
        if(mp[2]>2 or mp[3]>1) ans=1;
        else if(mp[2]!=0 and mp[3]!=0) ans=1;
        if(ans==0 or n==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
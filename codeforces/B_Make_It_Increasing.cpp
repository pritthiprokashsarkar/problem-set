#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc; 
    while(tc--)
    {
        int n; cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int cnt=0;
        for(int i=n-2; i!=-1; i--)
        {
            if(a[i]<a[i+1])
            {
                continue;
            }
            else
            {
                while(a[i]>a[i+1])
                {
                    a[i]= a[i]/2;
                    cnt++;
                }
                if(a[i]==a[i+1])
                {
                    a[i]= a[i]/2;
                    cnt++;
                }
            }
        }
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        if(mp.size()==n)
        cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

}
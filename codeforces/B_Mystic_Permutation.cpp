#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc; 
    while(tc--)
    {
        int n; cin>>n;
        vector<int>a(n);
        vector<int>ans(n);
        for(int i=0; i<n; i++) cin>>a[i];
        set<int>s;
        for(int i=1; i<=n; i++) s.insert(i);
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            auto it= s.begin();
            if(a[i]!=(*it))
            {
                ans[i]=(*it);
                s.erase(*it);
            }
            else
            {
                if(s.size()!=1)
                {
                    ++it;
                    ans[i]=(*it);
                    s.erase(it);
                }
                else
                {
                    ans[i]=(*it);
                    s.erase(it);
                    swap(ans[i],ans[i-1]);
                }
            }
        }
        for(auto it :ans) cout<<it<<" ";
        cout<<endl;
    }
}
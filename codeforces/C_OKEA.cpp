#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,k; cin>>n>>k;
        int even = n*k/2;
        int odd = n*k - even;
        vector<int>a(n*k+1);
        if( k&1 and k>1) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            vector<int>a;
            for(int i=1; i<=(n*k); i+=2) a.push_back(i);
            for(int i=2; i<=(n*k); i+=2) a.push_back(i);
            int ind=0;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=k; j++ )
                {
                    cout<<a[ind]<<" ";
                    ind++;
                }
                cout<<endl;
            }

        }
        
    }
    
}
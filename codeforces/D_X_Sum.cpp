#include<bits/stdc++.h>
using namespace std;
int arr[300][300];
long long call(int i, int j, int n, int m)
{
    long long ans=0, ind=0;
    while(i-ind>-1 and j-ind>-1)
    {
        ans+=arr[i-ind][j-ind];
        ind++;
    }
    ind=0;
    while(i-ind>-1 and j+ind<m)
    {
        ans+=arr[i-ind][j+ind];
        ind++;
    }
    ind=0;
    while(i+ind<n and j-ind>-1)
    {
        ans+=arr[i+ind][j-ind];
        ind++;
    }
    ind = 0;
    while(i+ind<n and j+ind<m)
    {
        ans+=arr[i+ind][j+ind];
        ind++;
    }
    return ans - 3*(arr[i][j]);
}
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m; cin>>n>>m;
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>arr[i][j];
        long long maxx=0;
        for(int i=0; i<=n-1; i++)
        {
            for(int j=0; j<=m-1; j++)
            {
                maxx = max(maxx,call(i,j,n,m));
            }
        }
        cout<<maxx<<endl;

    }
}
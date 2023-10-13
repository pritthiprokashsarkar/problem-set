#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    vector<int>b(m);
    vector<int>c(m);

    int i;
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<m; i++) cin>>b[i];

    sort(a.begin(),a.end());

    for(i=0; i<m; i++)
    {
        int low=0; int high=n-1,ans=-1;

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[mid]<=b[i])
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        c[i]=ans+1;
    }
    for(i=0; i<m; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

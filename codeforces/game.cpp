
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int start=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            break;
            start=i;
        }

        int end1=n-1;
        for(i=n-1; i>=0; i--)
        {
            if(a[i]==0)
            break;
            end1=i;
        }

        cout<<max(0, end1-start)<<endl;
    }
}

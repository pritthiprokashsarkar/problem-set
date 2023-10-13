#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; cin>>n;
    long long int a[n],c=0;
    for(int i=0; i<n; i++) cin>>a[i];
    long long int m; cin>>m;
    long long int b[m];
    for(int i=0; i<m; i++) cin>>b[i];
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]<=b[j]) c++;
        }
        cout<<c<<endl;
        c=0;
    }
}
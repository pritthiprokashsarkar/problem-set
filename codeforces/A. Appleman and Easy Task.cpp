#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;

    cin>>n;
    char a[n][n];

    for(int i=0; i<n; i++ )
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    for(int i=0; i<n; i++ )
    {
        for(j=0; j<n; j++)
        {
            if(i-1>=0 and a[i-1][j]=='o') c++;
            if(i+1<n and a[i+1][j]=='o') c++;
            if(j-1>=0 and a[i][j-1]=='o') c++;
            if(j+1<n and a[i][j+1]=='o') c++;
            if(c%2==1) {cout<<"NO"<<endl; return 0; }
        }

    }
    cout<<"YES"<<endl;
}

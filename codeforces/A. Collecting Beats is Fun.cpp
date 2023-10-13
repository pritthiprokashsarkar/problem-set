#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k; cin>>k;
    k*=2;
    char a[4][4];
    int b[10]={0};
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            cin>>a[i][j];
            char n=a[i][j];
            int x= n-48;
            b[x]++;
        }
    }
    int aa=0;
    for(i=0; i<10; i++)
    {
        if(b[i]>k) aa=1;
    }
    if(aa) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

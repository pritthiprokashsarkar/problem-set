#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string x;
    int c[a][b];
    for (int i=0;i<a;i++)
    {
        cin>>x;
        for (int j=0;j<b;j++)
        {
            c[i][j]=x[j]-'0';
        }
    }
    int d[a]={0},k=0;
    for (int j=0;j<b;j++)
    {
        int mx=c[0][k];
        for (int i=0;i<a;i++)
        {

            if (c[i][j]>mx)
            {
                mx=c[i][j];
            }
        }
        k++;
        for (int i=0;i<a;i++)
        {
            if (c[i][j]==mx)
            {
                d[i]++;
            }
        }
    }
    for (int i=0;i<a;i++)
    {
        cout<<d[i]<<endl;
    }
    int sum=0;
    for (int i=0;i<a;i++)
    {
        if (d[i]!=0) sum++;
    }
    cout<<sum<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M,i,j,k,mini=10000000000,l,p,q;
    cin>>N>>M;

    int a[N][2],b[M][2];


    for(i=0; i<N; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }

    for(p=0; p<M; p++)
    {
        for(q=0; q<2; q++)
        {
            cin>>b[p][q];
        }
    }

    for(i=0; i<N; i++)
    {
        for(p=0; p<M; p++)
        {
            k=abs(a[i][0]-b[p][0])+abs(a[i][1]-b[p][1]);
            //cout<<k<<endl;
            if(k<mini)
            {
                mini=k;
                l=p;
            }
        }
        cout<<l+1<<endl;
        mini=10000000000;
        l=0;

    }
}

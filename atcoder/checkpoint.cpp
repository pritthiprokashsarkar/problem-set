#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int nmax=50;
    int N,M,i,j,min_dis,cur_dis,check=0;
    cin>>N>>M;
    int a[nmax],b[nmax],c[nmax],d[nmax];

    for(i=0; i<N; i++) {cin>>a[i]>>b[i];}
    for(j=0; j<M; j++) {cin>>c[j]>>d[j];}

    for(i=0; i<N; i++)
    {
        min_dis=abs(a[i]-c[0])+abs(b[i]-d[0]);
        check=1;
        for(j=1; j<M; j++)
        {
            cur_dis=abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(min_dis>cur_dis)
            {
                min_dis=cur_dis;
                check=j+1;

            }
;
        }
        cout<<check<<endl;
        check=0;
    }
}

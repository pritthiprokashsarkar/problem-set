#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m; cin>>n>>m;
        int a[n][m];
        int x=0;
        memset(a,0,sizeof(a));
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=m-1;j++){
                if((i==0 and j==0) or (i==0 and j==m-1)){
                    a[i][j]=1;
                }
                else {
                    if(i%2==1){
                        if(j>=x and j<=m-1-x){ 
                            a[i][j]=1;
                        }
                    }
                }
            }
            x+=2;

            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}









/* 
    0 1 2 3
0   1 0 1 0
1   0 1 0 1
2   1 0 1 0
3   0 1 0 1 

*/
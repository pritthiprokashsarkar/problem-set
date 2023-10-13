#include<bits/stdc++.h>
using namespace std;

int main(){
    char r,c;
    int i,j;
    cin>>r>>c ;

    char a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

        for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}


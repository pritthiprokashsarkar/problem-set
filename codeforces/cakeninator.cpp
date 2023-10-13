#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, rows=0,cols=0,i,j;
    cin>>row>>col;

    char a[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ;i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(a[i][j]=='S')
            {
                rows++;
                break;
            }
        }
    }
   // cout<<rows<<endl;
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            if(a[j][i]=='S')
            {
            cols++;
            break;
            }

        }
    }
    //cout<<cols<<endl;

    cout<<(((row-rows)*col)+((col-cols)*row))-((row-rows)*(col-cols))<<endl;

}

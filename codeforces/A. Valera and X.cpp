#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,diagonal=0,counter=0;
    cin>>n;
    char a[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    char o=a[0][0],p=a[0][1];

        for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i==j and a[i][j]==o ) or (i+j==n-1 and a[i][j]==o)) diagonal++;
           // continue;
           /* else
            {

                cout<<"NO";
                return 0;
            } */

            if((i!=j and a[i][j]==p ) or (i+j!=n-1 and a[i][j]==p)) counter++;
            //continue;
           /* else
            {
                cout<<"NO";
                return 0;
            }*/

        }
    }
    //cout<<"YES";
    if(diagonal==2*n-1 and counter==n*n-2*n+1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

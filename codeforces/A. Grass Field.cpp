#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
    int flag=1;
    int count1=0;
    int a[2][2];
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[i][j]==1)
            {
                count1++;
            }
            if(i==j and a[i][j]==1 or i+j==1 and a[i][j]==1)
            {
                flag=0;
            }
        }
    }
    if(count1==4 )
        cout<<"2"<<endl;
    else if(count1==0)
        cout<<"0"<<endl;
    else if(count1==1 or count1==2 or flag==0 or count1==3 or count1==1 )
        cout<<"1"<<endl;

    }


}

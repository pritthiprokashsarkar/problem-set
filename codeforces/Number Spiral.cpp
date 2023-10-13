#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    unsigned long long  int i,j,d;
    cin>>i>>j;
    j--,i--;
            if(i>j and i%2==1)
            {
               d=pow((i+1),2)-j;
            }
            else if(i>j and i%2==0)
            {
                d=pow((i),2)+(j+1);
            }
            else if(i<j and j%2==1)
            {
                d=pow((j),2)+(1+i);
            }
            else if(i<j and j%2==0)
            {
                d=pow((j+1),2)-i;
            }
            else if(i==j)
            {
                d=pow((i+1),2)-i;
            }

            cout<<d<<endl;
    }


}

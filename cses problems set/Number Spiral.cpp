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
               d=((i+1)*(i+1))-j;
            }
            else if(i>j and i%2==0)
            {
                d=(i*i)+(j+1);
            }
            else if(i<j and j%2==1)
            {
                d=(j*j)+(1+i);
            }
            else if(i<j and j%2==0)
            {
                d=((j+1)*(j+1))-i;
            }
            else if(i==j)
            {
                d=((i+1)*(i+1))-i;
            }

            cout<<d<<endl;
    }


}

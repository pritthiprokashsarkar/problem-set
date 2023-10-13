#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
    long long int r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;
    long long int sum3,sum4;
    long long int sum1=r1+c1; long long int sum2=r2+c2;
    if(r1==c1 and r2==c2)
    {
        cout<<"Case "<<i+1<<":"<<" 1"<<endl;
    }
   else if((sum1%2==0 and sum2%2==1) or (sum1%2==1 and sum2%2==0))
    {
        cout<<"Case "<<i+1<<":"<<" impossible"<<endl;
    }
    else
    {
        if(r1>c1)
        {
            r1=r1-(c1-1);
            c1=c1-(c1-1);
            sum3=r1+c1;
        }
        else
        {
            r1=r1-(r1-1);
            c1=c1-(r1-1);
            sum3=r1+c1;
        }

        /// 2nd case
        if(r2>c2)
        {
            r2=r2-(c2-1);
            c2=c2-(c2-1);
            sum4=r2+c2;
        }
        else
        {
            r2=r2-(r2-1);
            c2=c2-(r2-1);
            sum4=r2+c2;
        }
    if(sum3==sum4) cout<<"Case "<<i+1<<":"<<" 1"<<endl;
    else if( sum3%2==0 and sum4%2==0 or sum3%2==1 and sum4%2==1  )
    cout<<"Case "<<i+1<<":"<<" 2"<<endl;
    else cout<<"Case "<<i+1<<":"<<" impossible"<<endl;
    }

    }



}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int l,r,p,rem,mini=100,maxi=-1,maxi2=-1,diff,q;
    cin>>l>>r;
    int i;
    for(i=l; i<=r; i++)
    {
        p=i;
        while(p>0)
        {
            rem=p%10;
            if(rem<mini) mini=rem;
            if(rem>maxi) maxi=rem;
            p=p/10;
        }
       // cout<<maxi<<" "<<mini<<endl;
        diff=maxi-mini;
       // cout<<diff<<endl;
        if(diff>maxi2){
            maxi2=diff;
            //cout<<maxi2<<" ";
            q=i;

           // cout<<i<<endl;
        }
        mini=1000; maxi=-1;
    }
   cout<<q<<endl;
    }

}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,q,i,l,r,k,sum=0,j;
        cin>>n>>q;
        long long int a[n+1];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=q;i++)
        {
            cin>>l>>r>>k;

        for(j=1; j<=n; j++)
        {

            if(j>=l and j<=r)
            {
                sum+=k;
            }
            else
            {
                sum+=a[j];
            }


        }
   if(sum%2==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   sum=0;


}
}


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int q,t; cin>>q>>t;
    int maxi=-1,p,a[q], b[q];

    for(int i=1; i<=q; i++) cin>>a[i];
    for(int i=1; i<=q; i++) cin>>b[i];
    int i;
    for(i=1; i<=q; i++)
    {

        if(a[i]<=t and b[i]>maxi)
        {
            maxi=b[i];
            p=i;
        }
        t--;
    }
    if(maxi==-1) cout<<"-1"<<endl;
    else cout<<p<<endl;
    }

}

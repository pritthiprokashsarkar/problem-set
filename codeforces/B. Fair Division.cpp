#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,sum=0,count1=0,count2=0,div;
    cin>>n;
    int a[n];
    for(i=0; i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

        if(sum%2==1)
            cout<<"NO"<<endl;
        else
        {
            div=sum/2;
            if(div%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }


}
}


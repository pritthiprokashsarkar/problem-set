#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n; cin>>y>>k>>n;
    int low=k+(y%k);
    int high=n-y;
    if(low<=high)
    {
        cout<<low-y<<" ";
        low+=k;
        while(low<=high)
        {
            cout<<low-y<<" ";
            low+=k;
        }
        cout<<endl;
    }
    else cout<<"-1"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a(4);
    for(int i=0; i<4; i++) cin>>a[i];
    if(a[2]>a[1] or a[3]<a[0]) cout<<-1<<endl;
    else
    {
        sort(a.begin(),a.end()); 
        cout<<a[1]<<" "<<a[2]<<endl;
    }
}
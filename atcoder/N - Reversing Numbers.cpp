#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;

    int i;
    for(i=0; i<n; i++)
    {
        int b; cin>>b;
        a.push_back(b);
    }
    reverse(a.begin(),a.end());

    for(i=0; i<n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[i]<<endl;
}

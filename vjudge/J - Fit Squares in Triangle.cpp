#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    if(n%2==1) n--;
    int a=(.5*n*n-n)/4;
    cout<<a<<endl;
    }


}

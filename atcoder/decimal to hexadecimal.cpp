#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,i;
    cin>>n;
    if(n==0) cout<<"0";
    if(n<16) cout<<"0";
    vector<char>a;
    while(n>0)
    {
        rem=n%16;
        if(rem<10)
        {
            a.push_back(rem+48);
        }
        if(rem>=10 and rem<16)
        {
            a.push_back(rem+55);
        }
        n/=16;
    }
    reverse(a.begin(),a.end());
        for(i=0; i<a.size(); i++)
    {
        cout<<a[i];
    }

}

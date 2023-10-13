#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
bool prime(int n)
{
    bool k=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n; cin>>n;
    if(n<=1) no;
    else
    {
    if(prime(n)) yes;
    else no;
    }
    
}
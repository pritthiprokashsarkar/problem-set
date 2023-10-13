#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int sum=0;
    long long int n,a;
    cin>>n;
    for(int i=0 ;i<n-1; i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<< (n*(n+1)/2)-sum<<endl;
    return 0;
}
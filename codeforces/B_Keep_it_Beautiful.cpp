#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,val;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        if(a[i]<a[i-1]) 
        {
             key=i;
             val=a[i];
        }
    }
    int ind1= lower_bound(a+key, a+n, val)-a;
} 
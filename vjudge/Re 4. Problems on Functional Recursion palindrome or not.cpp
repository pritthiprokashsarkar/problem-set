#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
    if(n<=1) return n;
    else return print(n-2)+print(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n)<<endl;
}

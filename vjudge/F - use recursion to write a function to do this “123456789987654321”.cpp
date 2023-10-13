#include<bits/stdc++.h>
using namespace std;
void fun(int i, int n)
{
    if(i>n) return ;
    cout<<i;
    fun(i+1, n);
}
void fun1( int i, int n)
{
    if(i<1) return ;
    cout<<i;
    fun1(i-1,n);
}
int main()
{
    int n; cin>>n;
    fun(1,9);
    fun1(9,9);
}

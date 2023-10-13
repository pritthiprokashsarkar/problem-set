#include<bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if(i>n) return ;
    print(i+1, n);
    cout<<i;
}
void print1(int i, int n)
{
    if(i<1) return ;
    print(i-1, n);
    cout<<i;
}
int main()
{
    int n;
    cin>>n;

    print(1,9);
    print1(1,9);
}

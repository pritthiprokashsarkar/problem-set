#include<bits/stdc++.h>
using namespace std;
int k;
void fun(int num)
{
    k++;
    if(num%2==0) return fun(num/2);
    else return fun(3*num+1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int maxi = 0;
    for(int i=a; i<=b; i++)
    {
        k=0;
        int num=i;
        fun(num);
        if(k>maxi) maxi=k;
    }
    cout<<maxi<<endl;
}


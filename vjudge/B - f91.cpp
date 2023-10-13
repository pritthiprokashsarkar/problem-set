#include<bits/stdc++.h>
using namespace std;
int fun(long long int n)
{
    if(n>100) return n-10;
    else if(n<=100) return fun(fun(n+11));
}

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
cout<<"f91"<<"("<<n<<") = "<<fun(n)<<endl;
    }
}



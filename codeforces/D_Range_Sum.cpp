#include<bits/stdc++.h>
using namespace std;
const long long maxx = 1e9+123;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
    long long l,r,big,small; cin>>l>>r;
    if(r>=l)
    {
        big=r;
        small=l;
    }
    else 
    {
        big = l;
        small = r;
    }
    long long sum1 = big*(big+1)/2;
    --small;
    long long sum2 = (small+1)*small/2;
    cout<<sum1-sum2<<endl;
    }
}

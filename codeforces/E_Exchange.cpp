#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        double n,a,b; cin>>n>>a>>b;
        while(a>b and n>a){
            a=a+(a-b);
        }
        cout<<(int)ceil(n/a)<<endl;
    }
}
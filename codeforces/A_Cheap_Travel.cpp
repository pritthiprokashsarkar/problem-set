#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int p1=n*a;
    int p2= (n/m)*b+(n%m)*a;
    int p3=((n/m)+1)*b;
    cout<<min({p1,p2,p3})<<endl;
}
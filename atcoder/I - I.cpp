#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double d;
    cin>>a>>b;

    char c;
    cin>>c;

    if(c=='+')
        cout<<(a+b)<<endl;
    else if(c=='-')
        cout<<(a-b)<<endl;
    else if(c=='*')
        cout<<(a*b)<<endl;
    else if(c=='/' and a!=0 and b!=0)
    {
        d=(double)a/(double)b;
        cout<<fixed<<setprecision(8)<<d<<endl;
    }
    else cout<<"0"<<endl;

}

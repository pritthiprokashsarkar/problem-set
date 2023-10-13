#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char d,c;

    while(cin>>a>>c>>b)
    {
        if(c=='?') {break;}
        if(c=='+') cout<<a+b<<endl;
        else if(c=='-') cout<<a-b<<endl;
        else if(c=='*') cout<<a*b<<endl;
        else if(c=='/') cout<<a/b<<endl;

    }
}

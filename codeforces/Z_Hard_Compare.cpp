#include<bits/stdc++.h>
using namespace std;
double logo(double n , double a)
{
    return a*log(n);
}
int main()
{
    double a,b,c,d; cin>>a>>b>>c>>d;
    double num1=logo(a,b),num2=logo(c,d);
    //cout<<num1<<" "<<num2<<endl;
    if(num1>num2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
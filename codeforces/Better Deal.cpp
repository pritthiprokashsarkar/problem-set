#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    float a,b;
    cin>>a>>b;

    a/=100.00;
    b/=100.00;

    float price1=100.00-100.00*a;
    float price2=200.00-200.00*b;

    if(price1<price2)
        cout<<"FIRST"<<endl;
    else if(price1>price2)
        cout<<"SECOND"<<endl;
    else if(price1==price2)
        cout<<"BOTH"<<endl;
    }
    return 0;

}


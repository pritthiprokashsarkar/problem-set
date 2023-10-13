#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,b;
    cin>>n>>m;
    while(1)
    {
        if(n==1 or m==1)
        {
            if(a) cout<<"Malvika"<<endl;
            else cout<<"Akshat"<<endl;
            break;
        }
        if(a==1)
        {
            a=0;
            n--;
            m--; 
            continue;
        }
        n--;
        m--;
        a=1;

    }
}

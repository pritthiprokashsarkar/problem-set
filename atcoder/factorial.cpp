#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i;
    for(i=1; ; i++)
    {
        sum+=n/(pow(5,i));
        if(pow(5,i)>n) break;
    }
        cout<<sum<<endl;
}

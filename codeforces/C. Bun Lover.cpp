#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    unsigned long long int m,sum=0; cin>>m;
    m++;
    for(int i=m; i>0; i--) sum+=i;
    for(int i=1; i<m; i++) sum+=i;
    sum++;
    cout<<sum<<endl;
    }


}

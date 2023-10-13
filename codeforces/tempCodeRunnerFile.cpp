#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        long long k=1;
        for(int i=0; k<=n; )
        {
           k = k + i;
           if(n%k==0 and k!=1) break;
            i=2*i;
        }
        cout<<n/k<<endl;
    }

}
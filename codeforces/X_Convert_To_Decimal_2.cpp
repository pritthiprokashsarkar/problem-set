#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        unsigned long long int n=0; cin>>n;
        string a,b;
        while(n)
        {
           char ans=(n%2)+'0';
           a+=ans;
           if(ans=='1') b+=ans;
           n=n/2;
        }
        unsigned long long int ans=0;
        for(int i=0; i<b.size(); i++)
        {
            ans+=pow(2,i);
        }
        cout<<ans<<endl;

    }
}
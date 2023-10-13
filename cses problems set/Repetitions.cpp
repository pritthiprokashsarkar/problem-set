#include<bits/stdc++.h>
using namespace std;
void solve( string a )
{
    int k=0,cnt=0,mx=0,kk=0;
    char b;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]==a[i+1])
        {
           if(k==0)
           {
             b=a[i];
             k=1;
           }
           if(b==a[i])
           {
               cnt++;
           }
           if(cnt>mx) mx=cnt;
        }
        else
        {
            k=0;
            cnt=0;
            continue;
        }
    }
    if(mx!=0) cout<<++mx<<endl;
    else cout<<"1"<<endl;
}
int main()
{
    string a; cin>>a;
    solve(a);
}

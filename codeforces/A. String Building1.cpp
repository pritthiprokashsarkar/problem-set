#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        bool x=false ;
    string a;
    cin>>a;

    int i;
    for(i=0; i<a.length(); i++)
    {
        if(a.length()==1)
        {
            x=true;
        }
        if(a[i]=='a' and a[i-1]!='a' and a[i+1]!='a' or a[i]=='b' and a[i-1]!='b' and a[i+1]!='b')
        {
              x=true;
        }
    }
    if(x==false) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

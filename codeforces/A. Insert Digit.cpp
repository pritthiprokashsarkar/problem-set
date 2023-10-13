#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    char x;
    cin>>x;

    string s;
    cin>>s;
    int c,i;

    for(i=0; i<n; i++)
    {
        if(s[i]<x)
        {
            c=i;
            break;
        }
    }

    s.insert(s.begin()+i,x);

    for(i=0; i<n+1; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    }

}

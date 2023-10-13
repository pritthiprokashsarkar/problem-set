#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,countc=0,countd=0, countn=0;
    cin>>n;

    string s;
    cin>>s;

    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='C') countc++;
        if(s[i]=='D') countd++;
        if(s[i]=='N') countn++;
    }

    int pointc=countc*2+countd;
    int pointn=countn*2+countd;

    if(pointc>pointn) cout<<60*n<<endl;
    else if(pointc<pointn) cout<<40*n<<endl;
    else cout<<55*n<<endl;
    }

}

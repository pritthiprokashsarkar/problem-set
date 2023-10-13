#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    long long cnt=0;
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-1-i]) cnt++;
    }
    if(s.size()%2==0)
    {
        if(cnt==0) cout<<"NO"<<endl;
        else if(cnt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if(cnt==1 or cnt==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
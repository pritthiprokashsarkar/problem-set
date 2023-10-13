#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string s,t="Timur";
    cin>>s;
    if(s.length()!=5)
    {
        cout<<"NO"<<endl;
        continue;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
}

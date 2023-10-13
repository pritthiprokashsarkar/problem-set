#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int d,count1=0;
    cin>>s;

    int a[26]={0};

    int i;
    for(i=0; i<s.length();i++)
    {
        d=s[i]-'a';
        a[d]++;
    }

    for(i=0; i<26; i++ )
    {
        if(a[i]!=0) count1++;
    }
    //cout<<count1<<endl;
    if(count1%2==1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}

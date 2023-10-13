
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
    char ch='a';
    cin>>n;


    string s;
    cin>>s;
    int i;
    for(i=0 ; i<s.length(); i++)
    {
        if (s[i]>ch)
            ch=s[i];
    }
    int d=ch-'a';
    cout<<d+1<<endl;
    }
}


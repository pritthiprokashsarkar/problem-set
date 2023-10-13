#include<bits/stdc++.h>
using namespace std;
int main()
{
    int small=0, large=0;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        else
            large++;
    }
    if(large>small)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-'a'+'A';
            }
            else
                continue;
        }
        cout<<s;
    }


        if(large<=small)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]-'A'+'a';
            }
            else
                continue;
        }
        cout<<s;
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;

    int i,p,q,j;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='A')
        {
            p=i;
            break;
        }
    }
    for(i=p+1; i<s.length(); i++)
    {
        if(s[i]=='A') continue;
        else if(s[i]=='Z')
        {
            q=i;
            continue;
        }
    }


    cout<<(q-p)+1<<endl;
}



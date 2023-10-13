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
    string s;
    vector<int>b;
    vector<char>c;
    cin>>s;

    reverse(s.begin(),s.end());
    int i;
    for(i=0; i<s.length();)
    {
        if(s[i]=='0')
        {
            int p=s[i+2]-'0';
            int q=s[i+1]-'0';
            b.push_back(p*10+q);
            i+=3;
        }
        else
        {
            int f=s[i]-'0';
            b.push_back(f);
            i++;
        }
    }
    reverse(b.begin(),b.end());
   // for(i=0; i<b.size();i++) cout<<b[i]<<" ";

       for(i=0; i<b.size(); i++)
    {
        c.push_back(('a'+b[i])-1);
    }

        for(i=0; i<b.size(); i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    }


}

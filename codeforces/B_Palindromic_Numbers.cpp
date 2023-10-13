#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        
        int n;
    cin >> n;
    vector<char>ans(n+1);
    string s;
    cin >> s;
    string temp = "";
    for (auto it : s)
    {
        temp += (('9'-'0'+0) - (it - '0' + 0))+'0';
    }
    if(s[0]!='9') cout<<temp<<endl;
    else
    {
        string t;
       
        for(int i=0 ; i<s.size(); i++)
        {
            t.push_back('1');
        }
        for(int i=n; i>=0; i--)
        {
            int carry=0;
            if(s[i]<=t[i])  
            {
                if(carry>0) carry=0;
                 
                ans[i]=((t[i]-'0'+0)-(s[i]-'0'+0)+'0');
            }
            else
            {
                char b = (((t[i]+'0'+0) + 10 )-(s[i]+'0'+0))+'0'; 
                ans[i]=b;
                carry++;
                s[i-1]++;
            }      
        }
        for(int i=0; i<n; i++) cout<<ans[i];
        cout<<endl;

    }
    }
}
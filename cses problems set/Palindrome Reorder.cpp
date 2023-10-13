#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<char> li;
    int e,c=0;
    string s; cin>>s;
    int b[26]={0};
    for(int i=0; i<s.size(); i++) {
        int a = s[i]-'A';
        b[a]++;
    }
   // for(int i=0; i<26; i++) cout<<b[i]<<" ";
    for(int i=0; i<26; i++)
    {
        if(b[i]%2==1)
        {
            c++;
            e=i;
            li.push_back(e+'A');
        }
    }
    if(c>1) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else{
        for(int i=0; i<26; i++)
        {
            if(b[i]>0)
            {
                for(int j=0; j<b[i]/2; j++)
                {
                    li.push_back(i+'A');
                }
                for(int j=0; j<b[i]/2; j++)
                {
                    li.push_front(i+'A');
                }
            }
            else continue;
        }
    }
        int sz=li.size();
    for(auto it : li) cout<<it<<"";
    cout<<endl;
}

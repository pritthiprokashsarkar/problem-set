
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int i;
    for(i=0; i<s.size(); i++)
    {
        if(i%2==0 and s[i]=='L')
        {
            cout<<"No"<<endl;
            return 0;
        }

        if(i%2==1 and s[i]=='R')
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

}

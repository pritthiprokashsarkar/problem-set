#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 or b==0) break;
        int i,j;
        for(i=0; i<b; i++) cout<<"#";
        cout<<endl;
        for(i=0; i<a-2; i++)
        {
            cout<<"#";
            for(j=0; j<b-2; j++)
            {
                cout<<".";
            }
            cout<<"#"<<endl;
        }
        for(i=0; i<b; i++) cout<<"#";
        cout<<endl;
        cout<<endl;

    }
}

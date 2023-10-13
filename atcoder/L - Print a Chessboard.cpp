#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    while(cin>>a>>b)
    {
        if(a==0 or b==0) break;

    for(i=0;i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if((i+j)%2==0) cout<<"#";
            else cout<<".";
        }
        cout<<endl;
    }
    cout<<endl;
    }


}

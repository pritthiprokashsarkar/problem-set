#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,counter=0;
    vector<int>a;
    while(cin>>b)
    {
        if(b==0) break;
       a.push_back(b);
       counter++;
    }

    int i;
    for(i=0; i<counter; i++)
    {
        cout<<"Case "<<i+1<<":"<<" "<<a[i]<<endl;
    }
}

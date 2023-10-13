#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    vector<string>w(n);

    for(i=0; i<n; i++)
    {
        cin>>w[i];
    }

    for(i=0; i<n-1; i++)
    {
        if(w[i].back() != w[i+1].front())
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(w[i] == w[j])
            {
            cout<<"No"<<endl;
            return 0;
            }
        }
    }

    cout<<"Yes"<<endl;
}

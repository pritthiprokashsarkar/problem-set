#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=1,key,i,k=0,j;
    while(cin>>n>>m)
    {
        if(n==0 and m==0) break;
        vector<int>a(n);
        vector<int>b(m);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        int n=a.size();

        for(j=0; j<m; j++)
        {
            cin>>b[j];
        }
        cout<<"CASE# "<<counter<<":"<<endl;
        for(j=0; j<m; j++)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]==b[j])
                {
                  cout<<b[j]<<" found at "<<i+1<<endl;
                  k=1;
                  break;
                }
            }

            if(k==0) cout<<b[j]<<" not found"<<endl;
            k=0;
        }
        counter++;
    }






}

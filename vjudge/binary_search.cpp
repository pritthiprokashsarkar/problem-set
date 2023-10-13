#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,counter=0,key,i;
    while(cin>>n>>m)
    {
        if(n==0 and m==0) break;

        else{
        vector<int>a(n);
        vector<int>b(m);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int n=a.size();

            key=5;
            int j=-1;
            int s=0;
            int e=n-1;


            while(s<=e)
            {
                int mid=s+(e-s)/2;

                if(key==a[mid])
                {
                    j=mid;
                    break;
                }
                else if(key<a[mid])
                {
                    e=mid-1;
                }
                else if(key>a[mid])
                {
                    s=mid+1;
                }

                if(j!=-1)
                {
                    cout<<key<<"found at"<<j<<endl;
                    break;
                }
                else
                {
                    cout<<key<<" not found"<<endl;
                    break;
                }
            }
        }





    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count1=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n;)
    {
        /*
        if(a[i]==0 a[i+1]==0)
        {

            for(; a[i]!=1; i++)
            {
                count1++;
            }
        }
        else
        {
            continue;
        }
        */
        if(a[i]==1)
        {
        if(a[i]==1 && a[i+1]==0 && a[i+2]==1)
        {
              i+=3;
            continue;

        }

        if(a[i]==0)
            count1++;
        i++;
        }



    }
    cout<<count1<<endl;

   /*
     10
     1 0 0 1 0 1 0 0 0 1
    */


}

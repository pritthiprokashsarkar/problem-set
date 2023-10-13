#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin>>n;
    char p;
    cin>>p;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0,s1=0,ans=0;
    int e=n-1,e1=e;
    while(s<=e)
    {

        if(a[s]==a[e])
        {
            s++;
            e--;
        }
        else
        {
            ans=1;
            break;

        }
    }
    if(ans==1)
    {
        while(s1<=e1)
        {
                if(a[s1]=='1' && a[e1]=='0' || a[s1]=='0' && a[e1]=='1')
        {
            s1++;
            e--;
        }
        else
        {

            ans=2;
            break;



        }
        }

    }
    if(ans=2)
        cout<<"NO";
    else
        cout<<"YES";
}

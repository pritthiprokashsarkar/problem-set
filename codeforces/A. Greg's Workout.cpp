#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,chest,bicep,backk,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

        for(i=0; i<n; i++)
    {
        if(i%3==0)
            chest+=a[i];
        else if(i%3==1)
            bicep+=a[i];
        else if(i%3==2)
            backk+=a[i];
    }

    if(chest>bicep and chest>backk)
        cout<<"chest"<<endl;
    else if(backk>bicep and backk>chest)
        cout<<"back"<<endl;
    else cout<<"biceps"<<endl;

}

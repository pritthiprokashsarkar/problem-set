#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;

   long long int i,j,big=-9999999999,joy,f,t,tt[n],ff[n];
    for(i=0; i<n; i++)
    {
        cin>>f>>t;
        ff[i]=f;
        tt[i]=t;
        if(tt[i]>k)
        {
           joy=ff[i]-(tt[i]-k);
        }
        else joy=ff[i];
        cout<<joy<<endl;
        if(joy>big){
            big=joy;
        }
    }
    cout<<big<<endl;

}


#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int  n)
{
    int b[5]={0};
    for(int i=1; i<=n ; i++) b[a[i]]++;
   // for(int i=1; i<=4; i++) cout<<b[i]<<" ";
  if(b[1]>=b[3])  b[1]=b[1]-b[3];
  else b[1]=0;
    if(b[2]%2==0) b[2]=b[2]/2;
    else
    {
        b[2]=(b[2]/2)+1;
       if(b[1]>=2) b[1]=b[1]-2;
    }

    int sum=b[4]+b[3]+b[2]+b[1];
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++) cin>>a[i];
    solve(a,n);
}

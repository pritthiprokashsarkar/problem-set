#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long xx,yy,up;
    cin>>xx>>yy;
    long long mxx=max(xx,yy);
    if(mxx%2==0)up=0;
    else up=1;
    if(up==1)
    {
      cout<<(mxx*(mxx-1)+1+(yy-xx))<<endl;   
    }
    else
    {
      cout<<(mxx*(mxx-1)+1+(xx-yy))<<endl;
    }
  }
   
}
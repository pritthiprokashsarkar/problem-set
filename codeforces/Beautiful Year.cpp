#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    n++;
    int i;
    for( i=n; ; i++)
    {
        int k=i;

        int a=k%10;
        k=k/10;
        int b=k%10;
        k=k/10;
        int c=k%10;
        k=k/10;
        int d=k%10;

        if( a==b || a==c || a==d || b==c || b==d || c==d)
        {
            continue;
        }
        if( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
          break;
        }
    }
    cout<<i<<endl;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long l,r,a,x;
        cin>>l>>r>>a;
        long long max_rem,max_quo;
        if(a==1)
        {
            cout<<r<<endl;
            continue;
        }
        else
        {
            max_quo = r/a + r%a ;
            if(r-(r%a)-1 >= l ){
            x = r-(r%a)-1;
            }
            else{
            x=r;
            }
            max_rem = x%a + x/a;
            cout<<max(max_rem, max_quo)<<endl;
        }
        
    }
}
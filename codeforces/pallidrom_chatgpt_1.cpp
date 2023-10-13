#include<iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll t,n,i,f,j,temp;
        string str;
    cin>>t;
    again:
    while(t--)
    {
        cin>>n;
        cin>>str;
        // if(str[0]!=str[n-1])
        // {
        f=0;
        for(i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                f=1;
                break;
            }
        }
        if(i==n/2)
        {
            cout<<"Yes"<<endl;
            goto again;
        }
        if(f)
        {
            if(n&1)
            {
                j=n/2-1;
            temp=n/2+1;
            }
            else {
                j=n/2-1;
                temp=n/2;
            }
            for(;j!=i;j--,temp++)
            {
                if(str[j]!=str[temp])
                {
                    f=2;
                    break;
                }
            }
        }
        if(f==0||f==2) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

}

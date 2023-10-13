#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    bool ans=false;
    cin>>n>>x;

    int a[n];
    int i;
    for(i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);

    for(i=0; i<n-3; i++)
    {
        int s1=i;
        int e1=n-1;
        while(s1<e1-2)
        {
            int s2=s1+1;
            int e2=e1-1;
            while(s2<e2)
            {
                int sum=a[s1]+a[s2]+a[e2]+a[e1];
                if(sum==x and a[s1]!=a[s2] and a[s2]!=a[e2] and a[e2]!=a[e1])
                {
                    cout<<a[s1]<<" "<<a[s2]<<" "<<a[e2]<<" "<<a[e1]<<endl;
                    s2++;
                    e2--;
                    ans=true;
                }
                else if(sum>x)
                {
                    e2--;
                }
                else
                {
                    s2++;
                }
            }
            e1--;
        }
    }
    if(ans==false) cout<<"NOT FOUND"<<endl;
}

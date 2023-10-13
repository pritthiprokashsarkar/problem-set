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

    for(i=0; i<n-1; i++)
    {
        int s=i+1;
        int e=n-1;
        int p=a[i];
        while(s<e)
        {
            int sum=p+a[e]+a[s];
            if(sum==x )
            {
                cout<<p<<" "<<a[s]<<" "<<a[e]<<endl;
                s++;
                e--;
                ans=true;
            }
            else if(sum>x) e--;
            else s++;

        }

    }
    if(ans==false) cout<<"NOT FOUND"<<endl;

}

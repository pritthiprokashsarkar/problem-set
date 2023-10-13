#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int a[n];
    int i;
    for(i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    for(i=n-1; i>0; i--)
    {
    int j=0;
    int k=i-1;
        while(j<k)
        {
            if(a[i]==a[j]+a[k])
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                j++; k--;
            }
            else if(a[j]+a[k]>a[i]) k--;
            else j++;
        }
    }

}






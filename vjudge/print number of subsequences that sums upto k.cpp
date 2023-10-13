#include<bits/stdc++.h>
using namespace std;
int prints(int ind, int s, int sum, int arr[], int n)
{
    if(s>sum) return 0;
    if(n==ind) {
        if(s==sum) return 1;
        else return 0;
    }
    s+=arr[ind];
    int l=prints(ind+1,s,sum,arr,n);
    s-=arr[ind];
    int r=prints(ind+1,s,sum,arr,n);
    return l+r;
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    cout<<prints(0,0,sum,arr,n)<<endl;
}

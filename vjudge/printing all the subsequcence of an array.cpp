#include<bits/stdc++.h>
using namespace std;
void fun(int i, vector<int> &a, int arr[], int n, int s, int sum)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto it:a) cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
        a.push_back(arr[i]); s+=arr[i];
        fun(i+1, a, arr, n, s, sum);
        a.pop_back(); s-=arr[i];
        fun(i+1, a, arr, n, s, sum);
}

int main()
{
    int n,sum; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int>a ;
    cin>>sum;
    fun(0, a, arr, n, 0, sum);
}

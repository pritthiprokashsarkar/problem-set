#include<bits/stdc++.h>
using namespace std;
bool k=false;
void fun(int i, vector<int>a ,int arr[], int n, int s, int sum)
{
    if(i==n)
    {
        if(s==sum and k==false)
        {
        cout<<"yes"<<endl;
        k=true;
        }
        return ;
    }
    a.push_back(arr[i]); s+=arr[i];
    fun(i+1, a ,arr, n, s, sum);
    a.pop_back(); s-=arr[i];
    fun(i+1, a ,arr, n, s, sum);

}

int main()
{
    int n,s; cin>>n;
    int sum; cin>>sum;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    vector<int>a;
    fun(0, a ,arr, n, 0, sum);
    if(k==false) cout<<"no"<<endl;
}

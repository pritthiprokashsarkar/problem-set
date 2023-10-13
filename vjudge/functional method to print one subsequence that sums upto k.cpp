#include<bits/stdc++.h>
using namespace std;
bool fun(int ind, int s, vector<int>a, int arr[],int n,int sum)
{
    if(ind==n)
    {
        if(sum==s)
        {
            for(auto it :a) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    a.push_back(arr[ind]);
    s+=arr[ind];
    if(fun(ind+1,s,a,arr,n,sum)==true) return true;
    a.pop_back();
    s-=arr[ind];
    if(fun(ind+1,s,a,arr,n,sum)==true) return true;
    return false;
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>a;
    fun(0,0,a,arr,n,sum);

}

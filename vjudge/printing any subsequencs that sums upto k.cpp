#include<bits/stdc++.h>
using namespace std;
bool flag=false;
void prints(int ind, vector<int>&a, int s, int sum, int arr[], int n)
{
    if(n==ind)
    {
        if(s==sum and flag==false)
        {
            flag=true;
            for(auto it:a) cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
    a.push_back(arr[ind]);
    s+=arr[ind];
    prints(ind+1, a,s,sum,arr,n);

    a.pop_back();
    s-=arr[ind];
    prints(ind+1, a, s,sum,arr,n);
}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>a;
    prints(0,a,0,sum,arr,n);
}

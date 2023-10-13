#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
vector<int> fn(int a)
{
    for(int i=2; i<=a ; i++)
    {
        bool ans=0;
        for(int j=2; j*j<=(i); j++)
        {
            if(i%j==0) {
                ans=1;
                break;
            }
        }
        if(!ans) prime.push_back(i);
    }
    return prime;
}
int main()
{
    int n; cin>>n;
    vector<int>prime = fn(n);
    for(auto it : prime) cout<<it<<" ";
    cout<<endl;
}
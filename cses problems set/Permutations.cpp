#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int>a;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else if(n==4)
    {
        int p=n;
        for(int i=2; i<=n; i+=2) a.push_back(i);
        p--;
        for(int i=1; i<=n; i+=2) a.push_back(i);
        for(auto it:a) cout<<it<<" ";
    }
    else if(n>3 and n!=4)
    {
        if(n%2==0)
        {
        int p=n;
        for(int i=p; i>=2; i-=2) a.push_back(i);
        p--;
        for(int i=p; i>=1; i-=2) a.push_back(i);
        }
        else
        {
        int p=n;
        p--;
        for(int i=p; i>=2; i-=2) a.push_back(i);
        for(int i=n; i>=1; i-=2) a.push_back(i);
        }
        for(auto it:a) cout<<it<<" ";
    }
    else  cout<<"NO SOLUTION"<<endl;
}
int main()
{
    int n; cin>>n;
    solve(n);
}

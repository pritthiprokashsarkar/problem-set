#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    vector<pair<long long,long long>>p(n);
    for(int i=0; i<n; i++)
    {
        long long a,b; 
        cin>>a>>b;
        long long big,small;
        if(a>b)
        {
            big = a;
            small = b;
        }
        else 
        {
            big = b;
            small = a;
        }
        p[i]={small,big};
    }
    sort(p.begin(),p.end());
    auto it = p.end();
    --it;
    if(it->first > x)
    {
        cout<<(it->first)-x<<endl;
    }
    
}
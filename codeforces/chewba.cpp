#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    unsigned long long x;
    cin>>x;
    while(x>10)
    {
        int rem = x%10;
        if(rem>4 and rem != 0) rem = 9 - rem;
        v.push_back(rem);
        x/=10;
    }
    if(x==9) v.push_back(x);
    else
    {
        if(x==10) v.push_back(10);
        else if(x>4 and x!=10)
        {
        x = 9 - x;
        v.push_back(x);
        }
        else v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(auto it : v) cout<<it;
    cout<<endl;
}

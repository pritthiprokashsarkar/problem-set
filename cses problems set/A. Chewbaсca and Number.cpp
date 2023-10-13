#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    unsigned long long x;
    cin>>x;
    while(x)
    {
        int rem = x%10;
        if(rem>4)
        {
             rem = 9 - rem;
             v.push_back(rem);
        }
        x/=10;
    }
    for(auto it : v) cout<<it;
    cout<<endl;
}

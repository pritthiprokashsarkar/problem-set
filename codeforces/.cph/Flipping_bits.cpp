#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    bitset<32>bs(n);
    for(int i=0;i<32;i++){
        bs[i]=1-bs[i];
    }
    int a=bs.size();
    long long num=0;
    while(a){
        if(bs[bs.size()-a]==1){
            num+=pow(2,a-1);
            a--;
        }
    }
    cout<<num<<endl;
}
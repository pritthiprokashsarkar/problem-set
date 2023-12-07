#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    while(test--){
        long long a,b,c;
        cin>>a>>b>>c;
        long x=0,y=0,z=0;
        if(abs(a-b)%2==0) z=1;
        if(abs(b-c)%2==0) x=1;
        if(abs(c-a)%2==0) y=1;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
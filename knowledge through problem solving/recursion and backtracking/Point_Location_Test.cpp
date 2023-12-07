#include<bits/stdc++.h>
using namespace std;
int area(int x1,int x2,int x3,int y1,int y2,int y3){
    return ((x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3));
}
int main(){
    int test; cin>>test;
    while(test--){
    int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int ans=area(x1,x2,x3,y1,y2,y3);
    if(ans<0) cout<<"RIGHT"<<endl;
    else if(ans>0) cout<<"LEFT"<<endl;
    else cout<<"TOUCH"<<endl;
    }

}